#include "main.h"

/**
  * print_chessboard - prints two dimentional array
  *
  * @a: the two dimensional array to be printed
  *
  * Description: Iterate and prints each element of 2D array
  *
  * Return: nothing.
  */
void print_chessboard(char (*a)[8])
{
	int i;
	int j;


	for (j = 0; j < 8; j++)
	{
		for (i = 0; i < 8; i++)
		{
			_putchar(a[j][i]);
		}
		_putchar(10);
	}
}
