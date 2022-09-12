#include<stdio.h>

/**
  * main - Entry points
  *
  * Description: Prints lowercase alphabets except e
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	int c;

	for (c = 97; c <= 122; c++)
		if (c != 101)
			putchar((int) c);
	putchar(10);
	return (0);
}
