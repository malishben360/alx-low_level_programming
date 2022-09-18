#include "main.h"

/**
  * print_line - print character in standard output
  *
  * Description: Prints _ n times using _putchar
  *
  * @n: number of _ to be printed
  *
  * Return: Always void
  */
void print_line(int n)
{
	int i;

	if (!(n < 1))
	{
		for (i = 1; i <= n; i++)
		{
			_putchar(95);
		}
	}
	_putchar(10);
}
