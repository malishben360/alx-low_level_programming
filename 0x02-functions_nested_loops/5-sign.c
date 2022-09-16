#include"main.h"

/**
  * print_sign - Checks the sign of argument n
  *
  * @n: The numeric value to check
  *
  * Description: Checks and prints n and its sign
  *
  * Return: Always 1 if n > 0, 0 if n = 0, and -1 if n < 0
  */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
