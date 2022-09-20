#include "main.h"

/**
  * _strlen - compute the length of a string
  *
  * @s: The string whoes length is to be return
  *
  * Description: Compute the length of string *s and return it
  *
  * Return: Always length of string *s
  */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (*(s + len) != 0)
		len++;
	return (len);
}
