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
	unsigned int i, j;
	char *str, code[] = "cifs";
	va_list ptr;

	va_start(ptr, format);
	i = 0;
	if (format != NULL)
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
					printf("%f", va_arg(ptr, double));
					break;
				case 's':
					str = va_arg(ptr, char *);
					if (str != NULL)
					{
						printf("%s", str);
						break;
					}
					printf("(nil)");
					break;
			}
			j = 0;
			while (j < strlen(code) && i < (strlen(format) - 1))
			{
				if (format[i] == code[j])
					printf(", ");
				j++;
			}
			i++;
		}
	printf("\n");
}
