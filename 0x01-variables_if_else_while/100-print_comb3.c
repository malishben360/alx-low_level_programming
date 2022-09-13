#include<stdio.h>

/**
  * main - Entry point
  *
  * Description: Prints double digits combination of 0 - 9
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	int i, j;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			if (j > i)
			{
				putchar((int) i);
				putchar((int) j);
				if (!((i == 56) && (j == 57)))
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar(10);
	return (0);
}
