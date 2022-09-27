#include "main.h"
#include <stddef.h>

/**
  * _strpbrk - find the first occurance of a character
  *
  * @s: the string to search from
  * @accept: the characters to search for
  *
  * Description: search and return the first occurance
  *
  * Return: Always the address of *accept, NULL otherwise
  */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
