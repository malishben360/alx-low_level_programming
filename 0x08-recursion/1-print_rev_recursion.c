#include "main.h"

/**
  * _print_rev_recursion - prints a string in reverse order
  *
  * @s: string to be printed
  *
  * Description: prints s in reverse order using recursion
  *
  * Return: nothing.
  */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(++s);
	_putchar(*s);
}
