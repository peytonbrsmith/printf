#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * struct fmt - types of data and their function
 * @ltr: the type of data
 * @type: pointer to function for type
 */
typedef struct fmt
{
	char *ltr;
	int (*type)();
} fmt;

int _printf(const char *format, ...);

int chkfmt(va_list *args, const char *format, int i);

int prchr(va_list *args);

int prstr(va_list *args);

int prdgt(va_list *args);

void getdigits(int n);

int _putchar(char c);

#endif /*_HOLBERTON_H_ */
