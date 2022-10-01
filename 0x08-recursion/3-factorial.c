#include "main.h"

/**
  * factorial - compute the factorial of an integer
  *
  * @n: the integer to be computed
  *
  * Description: computes the factorial of n using recursion
  *
  * Return: Always the factorial of n.
  */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		if (n <= 1 && n >= 0)
		{
			return (1);
		}
		return (n * factorial(n - 1));
	}
}
