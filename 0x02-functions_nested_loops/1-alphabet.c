#include<stdio.h>
#include"main.h"

/**
  * main - Entry point
  *
  * Description: Print lowcase alphabets from a-z
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	print_alphabet();
	return (0);
}

/**
  * print_alphabet - Helper function
  *
  * Description: Print string using the _putchar function
  *
  * Ruturn: Alway void (Success and Failure)
  */

void print_alphabet(void)
{
	int c;

	for (c = 97; c <= 122; c++)
	{
		_putchar((int) c);
	}
	_putchar(10);
}
