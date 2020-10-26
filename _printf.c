#include "holberton.h"
/**
 * _printf - prints strings with formatted variables
 * @format: the string to format and print
 *
 * Return: the number of chars printed
 */
int _printf(const char *format, ...)
{
	int i = 0;
	int chk = 0;
	int retcount = 0;
	va_list args;
	fmt fmtspec[] = {
		{"%", chkfmt},
		{"\\", chkfmt},
		{NULL, NULL}
	};

	va_start(args, format);

	while (format != NULL && format[i] != '\0')
	{
		if (format[i] == *(fmtspec[0].ltr))
		{
			chk += fmtspec[0].type(&args, format, i);
			if (chk == -1)
				return (-1);
			retcount += chk;
			i++;
			while (format[i] == ' ')
				i++;
			chk = 1;
		}
		if (chk == 0)
		{
			_putchar(format[i]);
			retcount++;
		}
		chk = 0;
		i++;
	}

	va_end(args);
	return (retcount);
}
