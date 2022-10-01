#include "main.h"

/**
  * _puts_recursion - prints a string
  *
  * @s: string to be printed
  *
  * Description: print a string using recursion
  *
  * Return: nothing.
  */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar(10);
		return;
	}

	_putchar(*s);
	_puts_recursion(++s);
}
