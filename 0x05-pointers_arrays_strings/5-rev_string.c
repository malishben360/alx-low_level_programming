#include "main.h"

/**
  * rev_string - reverse the content of a string
  *
  * @s: The string to be reversed
  *
  * Description: reverse the content of a string using pointer
  *
  * Return: nothing.
  */
void rev_string(char *s)
{
	int len, i;
	int index;
	char ss[512];
	
	len = _strlen(s);
	for (i = 0; i < len; i++)
	{
		ss[i] = *(s + i);
	}

	index = 0;
	for (i = len - 1; i >= 0; i--)
	{
		*(s + index) = ss[i];
		index++;
	}
}

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
	while (s[len] != '\0')
		len++;
	return (len);
}
