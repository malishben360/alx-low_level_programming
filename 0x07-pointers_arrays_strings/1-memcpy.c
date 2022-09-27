#include "main.h"

/**
  * _memcpy - copy the memory of an area
  *
  * @dest: the destination to be copied to
  * @src: the source to be copied from
  * @n: the number of bytes to be copied
  *
  * Description: Copy n bytes from src to dest and returned dest
  *
  * Return: Always the address dest
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
