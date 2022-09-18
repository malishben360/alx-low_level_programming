#include "main.h"

/**
  * print_diagonal - print character '\'
  *
  * Description: Print a diagonal line with _putchar function
  *
  * @n: Number of times '\' is printed
  *
  * Return: Always void
  */
void print_diagonal(int n)
{
	int i, j;

	if (!(n < 1))
	{
		for (i = 0; i < n; i++)
		{
			j = i;
			while (j)
			{
				_putchar(32);
				j--;
			}
			_putchar(92);
			_putchar(10);
		}
	}
	else
		_putchar(10);
}
