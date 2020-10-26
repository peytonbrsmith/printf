#include "holberton.h"
/**
 * chkfmt - checks the format modifer
 * @args: argument pointer
 * @format: the string
 * @i: the location of the modifer
 *
 * Return: count of anything printed
 */
int chkfmt(va_list *args, const char *format, int i)
{
	int j = 0, x = 0;
	fmt fmtmods[] = {
		{"c", prchr},
		{"s", prstr},
		{"d", prdgt},
		{"i", prdgt},
		{NULL, NULL}
	};

	i++;
	if (format[i] == ' ')
	{
		_putchar(' ');
		i++;
	}
	if (format[i] == '%')
	{
		_putchar('%');
		return (1);
	}
	if (format[i] == 'n')
	{
		_putchar('\n');
		return (1);
	}
	while (fmtmods[j].type != NULL && *(fmtmods[j].ltr) != format[i])
	{
		j++;
	}
	if (fmtmods[j].type != NULL)
	{
		x = fmtmods[j].type(args);
	}
	return (x);
}
