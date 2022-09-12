#include<stdio.h>

/**
  * main - Entry point
  *
  * Description: Prints lowercase letters in reverse order
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	int c;

	for (c = 122; c >= 97; c--)
		putchar((int) c);
	putchar(10);
	return (0);
}
