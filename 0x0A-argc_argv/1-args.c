#include <stdio.h>

/**
  * main - Entry point
  *
  * @argc: the number of arguments passed to main
  * @argv: the array of arguments passed to main
  *
  * Description: print the total number of argv - 1
  *
  * Return: Always 0 (Success).
  */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}
