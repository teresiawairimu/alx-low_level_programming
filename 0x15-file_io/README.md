![img](https://assets.imaginablefutures.com/media/images/ALX_Logo.max-200x150.png)
> Handling file I/O 

By: Teresiah Nduati
## About 
In this session, we will have a look at handling file input and output in C.

## Resources 
1. [File Desriptor](https://en.wikipedia.org/wiki/File_descriptor)

2. [Handling files in C](https://byjus.com/gate/file-handling-in-c/)

## Man / Help 
* ```close```
* ```open```
* ```read```
* ```write```
* ```dprintf```

## Learning objectives 
By the end of this session, you should be able to [explain to anyone](https://fs.blog/feynman-learning-technique/) without the help of google the following concepts. 

* [X] Look for the right source of information online
* [X] How to create, open, close, read and write files
* [X] What are file descriptors
* [X] What are the 3 standard file descriptors, what are their purpose and what are their <code>POSIX</code> names
* [X] How to use the I/O system calls ```open, close, read``` and ```write```
* [X] What are and how to use the flags ```O_RDONLY```, ```O_WRONLY```, ```O_RDWR```

* [X] What are file permissions, and how to set them when creating a file with the ```open``` system call
* [X] What is a system call
* [X] What is the difference between a function and a system call

1. Add a function that reads a text file and prints it to the POSIX standard output
2. Add a function that creates a file.
3. Add a function that appends text at the end of a file
4. Add a program that copies the content of a file to another file
5. Add a program that displays the information contained in the ELF header at the start of an ELF file
