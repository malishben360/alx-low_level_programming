#include "main.h"

/**
  * flip_bits - computes the number of bits to flip to
  * get from a number to another
  * @n: number from
  * @m: number to
  *
  * Return: Always number of bits to flip.
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i;
	unsigned int count = 0;

	for (i = 0; i < 64; i++)
	{
		if ((n & (1 << i)) != (m & (1 << i)))
			count += 1;
	}
	if (m == 0)
		return (count);
	return (count >> 1);
}
