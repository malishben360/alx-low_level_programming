#include <stdio.h>
#include <stdlib.h>

/**
  * main - Entry point
  *
  * @argc: the number of arguments passed to main
  * @argv: the array of arguments passed to main
  *
  * Description: compute the maximun amount of change
  *
  * Return: Always 0 (Success), and 1 (Failure).
  */
int main(int argc, char *argv[])
{
	int mod;
	int div;

	if (argc == 2)
	{
		if (!(atoi(argv[1]) < 0))
		{
			mod = atoi(argv[1]) % 25;
			div = atoi(argv[1]) / 25;

			if (mod)
			{
				printf("%d\n", div + 1);
			}
			else
			{
				printf("%d\n", div);
			}

			return (0);
		}
		else
		{
			printf("%d\n", 0);

			return (0);
		}
	}
	else
	{
		printf("Error\n");

		return (1);
	}
}
