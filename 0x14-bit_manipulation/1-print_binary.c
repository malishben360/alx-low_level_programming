#include "main.h"

/**
  * print_binary - prints the binary represention of a decimal number
  * starting from the left most significant bit
  * @n: decimal number
  *
  * Return: nothing.
  */
void print_binary(unsigned long int n)
{
	int i, flag;

	flag = 0;
	for (i = 63; i >= 0; i--)
	{
		if ((n & (1 << i)) != 0)
		{
			_putchar(49);
			flag = 1;
		}
		else if (flag == 1)
		{
			_putchar(48);
		}
	}
	if (n == 0)
		_putchar(48);
}
