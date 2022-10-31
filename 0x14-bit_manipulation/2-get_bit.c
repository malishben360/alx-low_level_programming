#include "main.h"

/**
  * get_bit - search for a bit at a given index
  * @n: decimal number to search through
  * @index: position of the bit in binary rep of n
  *
  * Return: Bit 0/1 (success), or -1 if failed.
  */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	if ((n & (1 << index)) == 0)
		return (0);
	else if ((n & (1 << index)) > 0)
		return (1);
	return (-1);
}
