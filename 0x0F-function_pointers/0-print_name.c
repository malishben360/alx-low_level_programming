#include "function_pointers.h"

/**
  * print_name - peints string on the standard output
  * @name: the string to be printed
  * @f: the call-back funtion to be invoked
  *
  * Return: nothing.
  */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		(*f)(name);
	}
}
