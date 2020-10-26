#include "holberton.h"
/**
 * prstr - prints strings from arg
 * @args: argument pointer
 *
 * Return: count of string elements printed
 */
int prstr(va_list *args)
{
	int x = 0;
	char *ar;

	ar = va_arg(*args, char *);
	if (ar == NULL)
		return (-1);
	while (*ar != '\0')
	{
		_putchar(*ar);
		x++;
		ar++;
	}
	return (x);
}
