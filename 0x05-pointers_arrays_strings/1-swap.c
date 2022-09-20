#include "main.h"

/**
  * swap_int - swap the two the value stored in memory *a with *b
  *
  * @a: First memory address
  *
  * @b: Second memory addreess
  *
  * Description: Swap two memory values
  *
  * Return: nothing
  */
void swap_int(int *a, int *b)
{
	int tmp_a;
	int tmp_b;

	tmp_a = *a;
	tmp_b = *b;
	*a = tmp_b;
	*b = tmp_a;
}
