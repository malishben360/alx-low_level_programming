#include "main.h"

/**
  * puts_half - prints the last half of a string
  *
  * @str: The string whoes last half is to be printed
  *
  * Description: prints the last half of str using _putchar
  *
  * Return: nothing.
  */
void puts_half(char *str)
{
	int len;
	int n;
	int i;

	len = _strlen(str);
	if ((len % 2) == 0)
	{
		n = (len / 2);
		for (i = n; i < (n * 2); i++)
			_putchar(*(str + i));
	}
	else
	{
		n = ((len - 1) / 2);
		for (i = (n + 1); i <= (n * 2); i++)
			_putchar(*(str + i));
	}
	_putchar(10);
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
