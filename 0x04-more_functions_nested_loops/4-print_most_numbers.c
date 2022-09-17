#include "main.h"

/**
  * print_most_numbers - print numbers
  *
  * Description: Prints 0-9 excluding 2 and 4
  *
  * Return: Always void
  */
void print_most_numbers(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		if ((n != 50) && (n != 52))
			_putchar(n);
	}
	_putchar(10);
}
