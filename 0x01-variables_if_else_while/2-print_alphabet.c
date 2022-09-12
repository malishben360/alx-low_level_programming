#include<stdio.h>

/**
 * main - Entry point
 * Description: Prints lowercase and alphabets
 * Return: Always 0 (Success)
 */

int main(void)
{
	int c;
	
	for (c = 97; c <= 122; c++)
	{
		putchar((int) c);
	}
	putchar(10);
	return (0);
}
