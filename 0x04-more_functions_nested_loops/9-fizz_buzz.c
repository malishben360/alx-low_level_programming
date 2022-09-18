#include <stdio.h>

/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	int i;
	int f, b;

	for (i = 1; i < 101; i++)
	{
		f = i % 3;
		b = i % 5;
		if ((f == 0) && (b == 0))
			printf("FizzBuzz ");
		else if (f == 0)
			printf("Fizz ");
		else if (b == 0)
			printf("Buzz ");
		else
			printf("%d ", i);
	}
	putchar(10);
	return (0);
}
