#include<stdio.h>

/**
  * main - Entry point
  *
  * Description: Prints the base 16 numbers in lowercase
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	int hex;

	for (hex = 48; hex <= 102; hex++)
		if (!((hex >= 58) && (hex <= 96)))
			putchar((int) hex);
	putchar(10);
	return (0);
}
