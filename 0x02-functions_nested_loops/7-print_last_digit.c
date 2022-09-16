#include"main.h"

/**
  * print_last_digit - Compute the last digit
  *
  * Description: Compute the last digit and prints it out
  *
  * @n: The int to compute its last digit
  *
  * Return: Alway the last digit of n
  */
int print_last_digit(int n)
{
	int last_digit, abs;

	abs = (n < 0) ? n * -1 : n;
	last_digit = abs % 10;
	_putchar('0' + last_digit);
	return (last_digit);
}
