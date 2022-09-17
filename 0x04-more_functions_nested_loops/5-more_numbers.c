#include "main.h"

/**
  * more_numbers -  print numbers on standard output
  *
  * Description: print number 0 - 14 using the _putchar function
  *
  * Return: Alway void
  */
void more_numbers(void)
{
	int i, j;
	int n, r;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j > 9)
			{
				n = (char) (j / 10);
				_putchar(n + '0');
			}
			r = (char) (j % 10);
			_putchar(r + '0');
		}
		_putchar(10);
	}
}
