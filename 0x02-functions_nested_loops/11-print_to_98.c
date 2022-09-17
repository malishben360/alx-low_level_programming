#include"main.h"
#include<stdio.h>

/**
  * print_to_98 - Print sequence of numbers
  *
  * Description: Print the subsequent 98 numbers after n
  *
  * @n: The starting point for the sequence
  *
  * Return: Always void
  */
void print_to_98(int n)
{
	int i, j;

	if (n != 98)
	{
		if (n < 98)
		{
			i = n;
			while (i <= 98)
			{
				if (i < 98)
				{
					printf("%d, ", i);
				}
				else
					printf("%d\n", i);
				i = i + 1;
			}
		}
		else
		{
			j = n;
			while (j >= 98)
			{
				if (j > 98)
				{
					printf("%d, ", j);
				}
				else
					printf("%d\n", j);
				j = j - 1;
			}
		}
	}
	else
		printf("%d\n", n);
}
