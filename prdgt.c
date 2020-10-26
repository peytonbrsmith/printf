#include "holberton.h"
/**
 * getdigits - gets digits
 * @n: int to get digits from
 */
void getdigits(int n)
{
	if (n > 0)
		getdigits((n / 10));
	if (n != 0)
	{
		_putchar('0' + (n % 10));
	}
}
/**
 * prdgt - prints digit passed from _printf
 * @args: argument pointer
 *
 * Return: count of digits and signs printed
 */
int prdgt(va_list *args)
{
	int rc = 0;
	int n = va_arg(*args, int);
	int x = n;
	int ld = 1;

	if (x < 0)
		x *= -1;

	while (x > 0)
	{
		x /= 10;
		rc++;
	}
	if (n < 0)
	{
		_putchar('-');
		rc++;
		ld = n % 10;
		n = n / -10;
	}
	else if (n == 0)
	{
		_putchar('0');
		return (rc);
	}
	getdigits(n);
	if (ld < 0)
	{
		_putchar('0' - ld);
	}
	return (rc);
}
