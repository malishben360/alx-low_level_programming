#include"main.h"

/**
  * jack_bauer - Prints hours and minutes
  *
  * Description: Print four digits in form of hours
  *
  * Return: Always void
  */
void jack_bauer(void)
{
	int i, j, k, l;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			for (k = 0; k < 6; k++)
			{
				for (l = 0; l < 10; l++)
				{
					_putchar(i + '0');
					_putchar(j + '0');
					_putchar(58);
					_putchar(k + '0');
					_putchar(l + '0');
					_putchar(10);
				}
			}
		}
	}
}
