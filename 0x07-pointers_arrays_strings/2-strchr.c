#include "main.h"
#include <stddef.h>

/**
  * _strchr - find the address of the first currence of a character
  *
  * @s: the string to search through
  * @c: the character to search for
  *
  * Description: Search s and return the address of character c
  *
  * Return: Always the address of char c, NULL otherwise.
  */
char *_strchr(char *s, char c)
{
	int i;
	char *ptr;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			ptr = &s[i];
			return (ptr);
		}
		i++;
	}
	return (NULL);
}
