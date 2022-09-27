#include "main.h"

/**
  * _memset - fill the memory with a constant byte
  *
  * @s: the point to the memory space
  * @b: the constant character to be filled
  * @n: number of b to be filled in s
  *
  * Description: Fill the string s with b n times
  *
  * Return: Always the pointer s.
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	s[i] = '\0';
	return (s);
}
