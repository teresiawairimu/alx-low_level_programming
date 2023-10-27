#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates a substring
 * @haystack: string where the substring is located
 * @needle: the substring to be located
 *
 * Return: a pointer to the beginning of the located substring
 * NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
        char *m, *n;

        if (*needle == '\0')
        {
                return (haystack);
        }
        while (*haystack != '\0')
        {
                m = haystack;
                n = needle;
                while (*n != '\0' && *m == *n)
                {
                        m++;
                        n++;
                }
                if (*n == '\0')
                {
                        return (haystack);
                }
                haystack++;
        }
        return (NULL);
}
