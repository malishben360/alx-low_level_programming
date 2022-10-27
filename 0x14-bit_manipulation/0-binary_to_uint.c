#include "main.h"

/**
  * _pow - compute the power base for binary conversion
  * @n: position of the bit
  *
  * Return: Unisigned int.
  */
int _pow(int n)
{
	int base = 1;

	if (n == 0)
		return (base);

	while (n > 0)
	{
		base = 2 * base;
		n--;
	}
	return (base);
}

/**
  * binary_to_uint - converts base two number to unsigned base 10
  * @b: the bits string to be converted
  *
  * Return: Unsignt integer, or 0 if failed.
  */
unsigned int binary_to_uint(const char *b)
{
	int i, len, pos;
	unsigned int uint;

	if (b == NULL)
		return (0);

	i = 0, len = 0;
	while (*(b + i) != '\0')
		len++, i++;

	pos = 0, uint = 0;
	for (i = len - 1; i >= 0; i--)
	{
		if (!(b[i] == '0' || b[i] == '1'))
			return (0);
		if (b[i] != '0')
			uint += _pow(pos);
		pos++;
	}
	return (uint);
}
