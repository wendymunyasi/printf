/* Online C compiler to run C program online */
#include <stdio.h>
#include <stdarg.h>

/**
 * _printf - function that produces output according to a format.
 * @format: pointer to character string. Composed of zero or more directives.
 *
 * write output to stdout, the standard output stream.
 * You need to handle the following conversion specifiers: c, s, %.
 * You don’t have to reproduce the buffer handling of the C library printf,
 * function.
 * You don’t have to handle the flag characters.
 * You don’t have to handle field width.
 * You don’t have to handle precision.
 * You don’t have to handle the length modifiers.
 *
 * Return: the number of characters printed excluding the null byte,
 * used to end output strings.
 */

int _printf(const char *format, ...)
{
	int i = 0;
	va_list arg;

	va_start(arg, format);

	while (format[i] != '\0')
	{
		printf("%s\n", format);
		format = va_arg(arg, char*);
	}

	va_end(arg);
	return (1);
}
