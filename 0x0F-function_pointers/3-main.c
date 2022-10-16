#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * main - Entry point
  * @argc: size of atguments passed to main
  * @argv: array og arguments passed to main
  *
  * Description: it performs five basic maths operations
  *
  * Return: 0 (Success), 98 99 100 (failure).
  */
int main(int argc, char *argv[])
{
	if (argc == 4)
	{
		char *operator = argv[2];
		int operant1 = atoi(argv[1]);
		int operant2 = atoi(argv[3]);
		int result;
		int (*op)(int, int) = get_op_func(operator);

		if (op != NULL)
		{
			if ((*operator == '/' || *operator == '%') && operant2 == 0)
			{
				printf("Error\n");
				exit(100);
			}
			result = op(operant1, operant2);
			printf("%d\n", result);
			return (0);
		}
		printf("Error\n");
		exit(99);
	}
	printf("Error\n");
	exit(98);
}
