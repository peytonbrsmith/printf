#include "holberton.h"
/**
 * prchr - prints chars from arg
 * @args: argument pointer
 *
 * Return: 1
 */
int prchr(va_list *args)
{
	int a = va_arg(*args, int);
	
	_putchar(a);
	return (1);
}
