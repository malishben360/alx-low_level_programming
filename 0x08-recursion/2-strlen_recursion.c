#include "main.h"

/**
  * _strlen_recursion - conpute thw length of a string
  *
  * @s: the string whoes length is to be turned
  *
  * Description: computes the length of s using recursion
  *
  * Return: Alway the length of s.
  */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (1 + _strlen_recursion(++s));
}
