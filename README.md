# Project Name
**0x11. C - printf**

## Authors' Details
1. *Wendy Munyasi - wendymunyasi@gmail.com*
1. *Brian Mugambi - brianmugambi199@gmail.com*


##  Requirements
*   Allowed editors: `vi`, `vim`, `emacs`.
*   All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`.
*   Your code should use the `Betty` style. It will be checked using `betty-style.pl` and `betty-doc.pl`.
*   All your files should end with a new line.
*   You are not allowed to use global variables.
*   No more than 5 functions per file.
*   You are allowed to use the following macros:`va_start`, `va_arg` and `va_end`.
*   Note that we will not provide the `_putchar` function for this project.
*   The `main.c` files are used to test your functions, but you don’t have to push them to your repo.
*   The prototypes of all your functions should be included in your header file called `main.h.
*   All your header files should be include guarded.

##  Authorized functions and macros
*   `write` (`man 2 write`)
*   `malloc` (`man 3 malloc`)
*   `free` (`man 3 free`)
*   `va_start` (`man 3 va_start`)
*   `va_end` (`man 3 va_end`)
*   `va_copy` (`man 3 va_copy`)
*   `va_arg` (`man 3 va_arg`)

### Project Description
Write your own `printf` function.

### Compilation
*   Your code will be compiled this way.
```
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c
```

*   Your code will be compiled as shown above.
*   As a consequence, be careful not to push any c file containing a `main` function in the root directory of your project (you could have a `test` folder containing all your tests files including `main` functions).
*   Our main files will include your main header file (`main.h`): `#include main.h`.
*   You might want to look at the gcc flag `-Wno-format` when testing with your `_printf` and the standard `printf`. Example of test file that you could use:

```
alex@ubuntu:~/c/printf$ cat main.c 
#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
	int len2;
	unsigned int ui;
	void *addr;

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	ui = (unsigned int)INT_MAX + 1024;
	addr = (void *)0x7ffe637541f0;
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);
	_printf("Unsigned:[%u]\n", ui);
	printf("Unsigned:[%u]\n", ui);
	_printf("Unsigned octal:[%o]\n", ui);
	printf("Unsigned octal:[%o]\n", ui);
	_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	_printf("Address:[%p]\n", addr);
	printf("Address:[%p]\n", addr);
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
	_printf("Unknown:[%r]\n");
	printf("Unknown:[%r]\n");
	return (0);
}
alex@ubuntu:~/c/printf$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c
alex@ubuntu:~/c/printf$ ./printf
Let's try to printf a simple sentence.
Let's try to printf a simple sentence.
Length:[39, 39]
Length:[39, 39]
Negative:[-762534]
Negative:[-762534]
Unsigned:[2147484671]
Unsigned:[2147484671]
Unsigned octal:[20000001777]
Unsigned octal:[20000001777]
Unsigned hexadecimal:[800003ff, 800003FF]
Unsigned hexadecimal:[800003ff, 800003FF]
Character:[H]
Character:[H]
String:[I am a string !]
String:[I am a string !]
Address:[0x7ffe637541f0]
Address:[0x7ffe637541f0]
Percent:[%]
Percent:[%]
Len:[12]
Len:[12]
Unknown:[%r]
Unknown:[%r]
alex@ubuntu:~/c/printf$
```

*   We strongly encourage you to work all together on a set of tests.
*	If the task does not specify what to do with an edge case, do the same as `printf`.


### Collaborate

To collaborate, reach us through the email addresses wendymunyasi@gmail.com or brianmugambi199@gmail.com.
