#include<stdio.h>

/**
  * main - Entry Point
  *
  * Description: Prints 0 - 9 follow by a new line
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
		putchar((int) n);
	putchar(10);
	return (0);
}
