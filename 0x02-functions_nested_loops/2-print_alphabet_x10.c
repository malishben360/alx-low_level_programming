#include"main.h"

/**
  * print_alphabet_x10 - Prints a-z alphabets 10 times
  *
  * Description: Uses on _putchar twice to prints 10 line of a-z
  *
  * Return: Always void
  */

void print_alphabet_x10(void)
{
	int i, j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 97; j <= 122; j++)
		{
			_putchar((int) j);
		}
		_putchar(10);
	}
}
