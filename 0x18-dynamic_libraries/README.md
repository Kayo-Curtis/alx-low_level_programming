How to c:reate a dynamic library and use it.
What is the environment variable $LD_LIBRARY_PATH and how to use it.
What are the differences between static and Dynamic libraries.
Basic usage nm, ldd, ldconfig

/*Task 0. A library is not a luxury but one of the necessities of life*/
Create the dynamic library libdynamic.so containing all the functions listed below:
1. I moved c files of functions from previos c task functions these files were in various repositories; 0-isupper.c 100-atoi.c 1-strncat.c 2-strncpy.c 3-strcmp.c  4-strpbrk.c 9-strcpy.c 0-memset.c 1-isdigit.c 2-strchr.c 3-islower.c 5-strstr.c 3-strspn.c 0-strcat.c 1-memcpy.c 2-strlen.c 4-isalpha.c 6-abs.c 3-puts.c
2. Using the compiler  gcc - fPIC -c *.c I compiled the all c files to object files(binary)
3. After this I linked all the files into one shared library libdynamic.so

/*Task 1. Without libraries what have we? We have no past and no future*/
Create a script that creates a dynamic library called liball.so from all the .c files that are in the current directory.



