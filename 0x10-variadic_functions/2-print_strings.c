#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
  * print_strings - prints strings with delimeter
  * @separator: the delimeter
  * @n: the total number of arguments passed
  *
  * Return: nothing.
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;
	char *str;

	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(ptr, char *);
		(str == NULL) ? printf("%s", "(nil)") : printf("%s", str);
		if ((i < n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(ptr);
	printf("\n");
}
