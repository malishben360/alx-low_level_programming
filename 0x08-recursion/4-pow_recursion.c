#include "main.h"

/**
  * _pow_recursion - compute the power of a number
  *
  * @x: the digit to be powered
  * @y: the digit to raise x to
  *
  * Description: Raise x to the power y using recursion
  *
  * Return: Always -1 if y < 0 else x^y
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else
	{
		if (y == 0)
		{
			return (1);
		}

		return (x * _pow_recursion(x, y - 1));
	}
}
