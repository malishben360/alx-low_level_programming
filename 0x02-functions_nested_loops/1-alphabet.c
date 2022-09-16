#include"main.h"

/**
  * print_alphabet - Helper function
  *
  * Description: Print string using the _putchar function
  *
  * Ruturn: Alway void (Success and Failure)
  */

void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar((int) i);
	}
	_putchar(10);
}
