#include "main.h"

/**
  * _strspn - compute the prifix of a string
  *
  * @c: the string with the prifix
  * @accept: the postfix string
  *
  * Description: compute the prefix characters in bytes
  *
  * Return: Always the size of the prefix substring
  */
unsigned int _strspn(char *c, char *accept)
{
	const char *s = c;
	const char *c1;

	while (*c)
	{
		for (c1 = accept; *c1; c1++)
		{
			if (*c == *c1)
				break;
		}
		if (*c1 == '\0')
			break;
		c++;
	}
	return (c - s);
}
