#include "main.h"

/**
  * clear_bit - sets a value  of a bit to 0 at a given index
  * @n: decimal number to manipulate
  * @index: position of the bit in binary rep of (n)
  *
  * Return: Always 1 (success), or -1 (failed).
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = *n & ~(1 << index);
	return (1);
}
