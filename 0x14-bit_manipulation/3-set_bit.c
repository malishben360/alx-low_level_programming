#include "main.h"

/**
  * set_bit - change a bit of a decimal number at a given index to 1
  * @n: decimal number
  * @index: position of the bit in binary rep of (n)
  *
  * Return: Always 1 (success), or -1 if (failed).
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = *n | (1 << index);
	return (1);
}
