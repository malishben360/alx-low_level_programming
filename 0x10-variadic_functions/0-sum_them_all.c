#include "variadic_functions.h"
#include <stdarg.h>

/**
  * sum_them_all - sum up all the variable arguments passed
  * @n: number of the supplied arguments excluded
  *
  * Return: the sum of all the arguments (Success) else 0 (Failure).
  */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list ptr;

	if (n != 0)
	{
		sum = 0;
		va_start(ptr, n);
		for (i = 0; i < n; i++)
		{
			sum += va_arg(ptr, int);
		}
		va_end(ptr);
		return (sum);
	}
	return (0);
}
