#include "3-calc.h"
#include <stdlib.h>

/**
  * op_add - sum two integers
  * @a: the first integer
  * @b: the second integer
  *
  * Return: Always an integer.
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - subtracts b from a
  * @a: subtract
  * @b: subtractor
  *
  * Return: Alway an integer.
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - multiplies a by b
  * @a: multiplicant
  * @b: multiplier
  *
  * Return: Always an integer.
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - divides a by b
  * @a: divisor
  * @b: divider
  *
  * Return: Always an integer, elae NULL.
  */
int op_div(int a, int b)
{
	return (a / b);
}

/**
  * op_mod - divides a by b an gets the remainder
  * @a: divisor
  * @b: divider
  *
  * Return: devident of a divided by b, else NULL.
  */
int op_mod(int a, int b)
{
	return (a % b);
}
