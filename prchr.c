#include "holberton.h"
/**
 * prchr - prints chars from arg
 * @args: argument pointer
 *
 * Return: 1
 */
int prchr(va_list *args)
{
	_putchar(va_arg(*args, int));
	return (1);
}
