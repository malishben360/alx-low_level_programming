#include "main.h"

/**
  * _strcat - join two strings together
  *
  * @dest: The destination string
  * @src: The source string to be joined
  *
  * Description: Concatinate dest string and src string together
  *
  * Return: Always the pointer to the destination string
  */
char *_strcat(char *dest, char *src)
{
	int i;
	char *ptr;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	ptr = dest + i;
	while (*src != '\0')
	{
		*ptr++ = *src++;
	}
	*ptr = '\0';
	return (dest);
}
