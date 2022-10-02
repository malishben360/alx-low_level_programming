#include <stdio.h>
#include <stdlib.h>

/**
  * main - Entry point
  *
  * @argc: the number of arguments passed to main
  * @argv: the array of arguments passed to main
  *
  * Description: compute the sum of all integers in
  * passed as arguments
  *
  * Return: Always summation, and 1 (Failure).
  */
int main(int argc, char *argv[])
{
	int i;
	int sum;

	if (!(argc < 2))
	{
		for (i = 1; i < argc; i++)
		{
			if (*argv[i] >= 48 && *argv[i] <= 57)
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);

		return (0);
	}
	else
	{
		printf("0\n");

		return (0);
	}
}
