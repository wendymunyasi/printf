/* Online C compiler to run C program online */
#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * print_chr - function that writes the character c to stdout.
 * @arguments: input char.
 * @buf: buffer pointer.
 * @ibuf: index for buffer pointer
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

int print_chr(va_list arguments, char *buf, unsigned int ibuf)
{
	char c;

	c = va_arg(arguments, int);
	handl_buf(buf, c, ibuf);

	return (1);
}
