#include "main.h"

/**
  * _isdigit - check if character is digit
  *
  * @c: The character to be checked
  *
  * Description: Compares c against digit codes
  *
  * Return: Always 1 if c is a digit, 0 otherwise
  */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	else
		return (0);
}
