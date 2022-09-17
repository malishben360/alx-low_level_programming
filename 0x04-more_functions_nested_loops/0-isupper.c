#include "main.h"

/**
  * _isupper - checks for the uppercase character
  *
  * Description: checks character using character code
  *
  * @c: the character to be checked
  *
  * Return: Alway 1 if is uppercase 0 otherwise
  */
int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
	{
		return (1);
	}
	else
		return (0);
}
