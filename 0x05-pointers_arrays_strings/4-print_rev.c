#include "main.h"

/**
  * print_rev - print a string in reverse form
  *
  * @s: The string to be printed in reverse form
  *
  * Description: Print a string in reverse form using _putchar
  *
  * Return: nothing.
  */
void print_rev(char *s)
{
	int len;
	int i;
	char c;

	len = get_len(s);
	if (len != 0)
	{
		for (i = len - 1; i >= 0; i--)
		{
			c = s[i];
			_putchar(c);
		}
	}
	_putchar(10);
}

/**
  * _strlen - compute the length of a string
  *
  * @str: The string whose length is to be computed
  *
  * Description: Compute the length of a string and return it
  *
  * Return: Always the length of a string
  */
int _strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
