#include<stdio.h>

/**
  * main - Entry point
  *
  * Description: Prints 3 digits combination of 0 - 9
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	int i, j, k;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			for (k = 48; k <= 57; k++)
			{
				if ((j > i) && (k > j))
				{
					putchar((int) i);
					putchar((int) j);
					putchar((int) k);
					if (!((i == 55) && (j == 56) && (k == 57)))
					{
						putchar(44);
						putchar(32);
					}
				}
			}
		}
	}
	putchar(10);
	return (0);
}
