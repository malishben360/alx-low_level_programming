#include "main.h"
#include <stdio.h>

/**
  * print_array - print the elements of an array
  *
  * @a: The array whoes elements are printed
  *
  * @n: The length of the array
  *
  * Return: nothing.
  */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
			printf("%d, ", a[i]);
		else
			printf("%d\n", a[i]);
	}
}
