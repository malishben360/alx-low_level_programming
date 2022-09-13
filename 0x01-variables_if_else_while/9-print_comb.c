#include<stdio.h>

/**
  * main - Entry point
  *
  * Description: Prints 0 - 9 seperated by comma and space
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar((int) n);
		if (n != 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar(10);
	return (0);
}
