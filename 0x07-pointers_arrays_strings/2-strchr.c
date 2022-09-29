#include "main.h"

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

	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	return ('\0');
}
