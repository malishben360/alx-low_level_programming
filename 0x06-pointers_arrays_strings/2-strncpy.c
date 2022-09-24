#include "main.h"

/**
  * _strncpy - copy a string into another string
  *
  * @dest: The destenation string to be copied to
  * @src: The source string to be copied from
  * @n: The number of character from src to be copied
  *
  * Description: Copy n characters of string src to string dest
  *
  * Return: Always the dest string.
  */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
