#include "main.h"

/**
  * _strncat - merge two strings together
  *
  * @dest: The destination string for concatenation
  * @src: The source string to be concatenated
  * @n: The number of characters to be concatenated fron src
  *
  * Description: Concatenate n number of char from src to dest
  *
  * Return: Always the dest.
  */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;
	int k;
	char *ptr;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; src[j] != '\0'; j++)
	{
	}

	ptr = dest + i;
	for (k = n; k > 0; k--)
	{
		*ptr++ = *src++;
	}

	if (!(n >= j))
	{
		*ptr = '\0';
	}

	return (dest);
}
