/* Online C compiler to run C program online */
#include <stdio.h>
#include <stdarg.h>
#include "main.h"

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
	/* int i = 0;
	va_list arg;

	va_start(arg, format);

	while (format[i] != '\0')
	{
		printf("%s\n", format);
		format = va_arg(arg, char*);
	}

	va_end(arg);
	return (1);
	*/
	va_list ap;
	char *p, *sval;
	int ival;
	double dval;

	va_start(ap, *format);
	for (p = format; *p; p++)
	{
		if (*p != '%')
		{
			putchar(*p);
			continue;
		}
		switch (*++p) 
		{
         	case 'd':
            ival = va_arg(ap, int);
            printf("%d", ival);
            break;
        case 'f':
            dval = va_arg(ap, double);
            printf("%f", dval);
            break;
        case 's':
            for (sval = va_arg(ap, char *); *sval; sval++)
            putchar(*sval);
            break;
        default:
            putchar(*p);
            break;
      	}
	}
	va_end(ap); /* clean up when done */
	return (1);
}
