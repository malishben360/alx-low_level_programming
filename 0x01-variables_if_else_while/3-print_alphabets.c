#include<stdio.h>

/**
  * main - Entry point
  *
  * Description: Prints lowercase and uppercase alphabets
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	int lc, uc;

	for (lc = 97; lc <= 122; lc++)
		putchar((int) lc);
	for (uc = 65; uc <= 90; uc++)
		putchar((int) uc);
	putchar(10);
	return (0);
}
