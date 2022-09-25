#include "main.h"

/**
  * reverse_array - reverse an array
  *
  * @a: the array type integr to be reversed
  * @n: the number elements of the array a
  *
  * Description: reverse an array of integer of length n
  *
  * Return: nothing.
  */
void reverse_array(int *a, int n)
{
	int i;
	int j;
	int ptr[512];

	i = n - 1;
	j = 0;
	while (i >= 0)
	{
		ptr[j] = a[i];
		i--;
		j++;
	}
	for (i = 0; i < n; i++)
	{
		a[i] = ptr[i];
	}
}
