#include <stdio.h>
#include <stdlib.h>

/**
  * main - Entry point
  *
  * @argc: the number of arguments passed to main
  * @argv: the array of arguments passed to main
  *
  * Description: compute the multiplication of two
  * integers passed as arguments
  *
  * Return: Always multiplication, and 1 (Failure).
  */
int main(int argc, char *argv[])
{
	int result;

	if (!(argc < 3))
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);

		return (0);
	}
	else
	{
		printf("Error\n");

		return (1);
	}
}
