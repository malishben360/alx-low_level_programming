#include "main.h"

/**
  * print_triangle - print # character on the standard output
  *
  * Description: Print a triangle using _putchar function
  *
  * @size: The height of the triangle in rows
  *
  * Return: Always void
  */
void print_triangle(int size)
{
	int i, j, k;

	if (!(size < 1))
	{
		for (i = 1; i < size + 1; i++)
		{
			j = size - i;
			while (j)
			{
				_putchar(32);
				j--;
			}
			k = i;
			while (k)
			{
				_putchar(35);
				k--;
			}
			_putchar(10);
		}
	}
	else
		_putchar(10);
}
