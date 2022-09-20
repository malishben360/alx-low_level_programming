#include "main.h"

/**
  * puts2 - print characters of a string
  *
  * @str: The string whoes characters is printed
  *
  * Description: Print the first element and any other characters
  *
  * Return: nothing.
  */
void puts2(char *str)
{
	int i;

	if (*str != '\0')
	{
		_putchar(*str);
		i = 1;
		while (*(str + i) != '\0')
		{
			if ((i % 2) == 0)
				_putchar(*(str + i));
			i++;
		}
	}
	_putchar(10);
}
