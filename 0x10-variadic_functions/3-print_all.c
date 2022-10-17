#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <string.h>

/**
  * print_all - prints any type of datatype of arguments passed
  * @format: the data types in sequencial order
  *
  * Return: nothing.
  */
void print_all(const char * const format, ...)
{
	unsigned int i;
	unsigned int j;
	char *str;
	char code[] = "cifs";
	va_list ptr;

	va_start(ptr, format);
	i = 0;
	while (i < strlen(format))
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ptr, int));
				break;
			case 'i':
				printf("%d", va_arg(ptr, int));
				break;
			case 'f':
				printf("%.f", va_arg(ptr, double));
				break;
			case 's':
				str = va_arg(ptr, char *);
				printf("%s", str);
				break;
		}
		j = 0;
		while (j < (strlen(code) - 1))
		{
			if (code[j] == format[i])
				printf(", ");
			j++;
		}
		i++;
	}
	va_end(ptr);
	printf("\n");
}
