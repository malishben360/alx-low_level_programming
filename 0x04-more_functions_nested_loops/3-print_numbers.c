#include "main.h"

/**
  * print_numbers - prints numbers on the standard out
  *
  * Description: prints 0 - 9 using the _putchar function
  *
  * Return: Always void
  */
void print_numbers(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		_putchar(n);
	}
	_putchar(10);
}
