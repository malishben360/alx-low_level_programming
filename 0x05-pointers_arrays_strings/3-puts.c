#include "main.h"

/**
  * _puts - prints a string on the stdout
  *
  * @str: The string to be printed out
  *
  * Description: Uses the _putchar function to print out a string
  *
  * Return: nothing.
  */
void _puts(char *str)
{
	int index;
	char c;

	index = 0;
	while (*(str + index) != 0)
	{
		c = *(str + index);
		_putchar(c);
		index++;
	}
	_putchar(10);
}
