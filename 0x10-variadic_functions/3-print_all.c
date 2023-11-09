#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"


void (*get_func(char identifier, struct format_struct *fmt_arr))(va_list *);
void print_char(va_list *arg);
void print_int(va_list *arg);
void print_float(va_list *arg);
void print_string(va_list *arg);

/**
* get_func - obtains the associated function for the given format type
* @fmt_arr: format types array
* @identifier: format type
* Return: pointer to a function indicating success or
* NULL (FAILURE)
*/

void (*get_func(char identifier, struct format_struct *fmt_arr))(va_list *)
{
	int i = 0;

	while (fmt_arr[i].format)
	{
		if (fmt_arr[i].format == identifier)
		{
			return (fmt_arr[i].fmt_print_func);
		}

		i++;
	}

	return (fmt_arr[i].fmt_print_func);
}

/**
* print_all - prints data of any data type
* @format: pointer to a string containing data format specifications
*/

void print_all(const char * const format, ...)
{
	unsigned int j = 0;
	char *separator = "";

	format_struct_ptr fmt_arr[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};
	void (*get_func_ptr)(va_list *);
	va_list args;

	va_start(args, format);

	while (format && format[j] != '\0')
	{
		get_func_ptr = get_func(format[j], fmt_arr);

		if (get_func_ptr)
		{
			printf("%s", separator);
			get_func_ptr(&args);
			separator = ", ";
		}

		j++;
	}

	va_end(args);
	printf("\n");
}


/**
* print_int - prints an int
* @arg: pointer to int
*/

void print_int(va_list *arg)
{
	printf("%d", va_arg(*arg, int));
}

/**
* print_char - prints char
* @arg: pointer to a char
*/

void print_char(va_list *arg)
{
	printf("%c", va_arg(*arg, int));
}


/**
* print_string - prints a string
* @arg: pointer to string
*/

void print_string(va_list *arg)
{
	char *str[2];
	int i;

	str[0] = va_arg(*arg, char *);
	str[1] = "(nil)";
	i = str[0] == NULL;
	printf("%s", str[i]);
}

/**
* print_float - displays a data of float type
* @arg: pointer to float
*/

void print_float(va_list *arg)
{
	printf("%f", va_arg(*arg, double));
}







