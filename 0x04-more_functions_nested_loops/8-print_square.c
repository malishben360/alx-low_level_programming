#include "main.h"

/**
  * print_square - print character # on standard output
  *
  * Description: Print a square on the standart output with #
  *
  * @size: The width and height of the square
  *
  * Return: Always void
  */
void print_square(int size)
{
	int i, j;

	if (!(size < 1))
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
				_putchar(35);
			_putchar(10);
		}
	}
	else
		_putchar(10);
}
