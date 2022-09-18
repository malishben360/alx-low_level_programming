#include <stdio.h>

long int prime_factor(long int n);

/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	long int primef;

	primef = prime_factor(612852475143);
	printf("%ld\n", primef);
	return (0);
}

/**
  * print_factor - Compute the prime factor of a number
  *
  * Description: Compute and print the highest prime factor
  *
  * @n: The number to compute its prime factor
  *
  * Return: Always the highest prime factor
  */
long int prime_factor(long int n)
{
	long int dor;
	long int dnt;

	dnt = n;
	dor = 2;
	while ((dnt != dor) && (dnt > dor))
	{
		while ((dnt % dor) == 0)
		{
			dnt = dnt / dor;
		}
		if (!(dnt <= dor))
			dor++;
	}
	return (dor);
}
