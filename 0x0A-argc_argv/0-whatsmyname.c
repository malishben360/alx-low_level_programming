#include <stdio.h>

/**
  * main - the entry point
  *
  * @argc: the length of argv array
  * @argv: the arguments passed to main via terminal
  *
  * Description: prints the name of the compiled c file
  *
  * Return: Always 0 (Success).
  */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);

	return (0);
}
