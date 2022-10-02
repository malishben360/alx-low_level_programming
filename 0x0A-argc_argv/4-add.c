#include <stdio.h>
#include <stdlib.h>
#include "main.h"

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
			if (_atoi_error(argv[i]))
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

/**
  * _atoi_error - check for non digit character in a
  * string
  *
  * @str: the string to check
  *
  * Descriprion: compare if all char in str are digit
  * characters
  *
  * Return: Always 1 (Success), 0 (Failure).
  */
int _atoi_error(char *str)
{
	while (*str)
	{
		if (!(*str >= 48 && *str <= 57))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
