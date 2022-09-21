#include "main.h"

/**
  * _strcpy - copy the content of a string
  *
  * @dest: The new location
  *
  * @src: The original location
  *
  * Description: copy string from src to dest
  *
  * Return: The address of the destination.
  */
char *_strcpy(char *dest, char *src)
{
	int index;

	index = 0;
	while (*(src + index) != '\0')
	{
		dest[index] = *(src + index);
		index++;
	}
	*(dest + index) = *(src + index);
	return (dest);
}
