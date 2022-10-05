#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
  * str_concat - join two strings together
  *
  * @s1: the first string literal
  * @s2: the second string literal
  *
  * Description: join s1 & s2 in a new memory location
  *
  * Return: pointer to a memory location, NULL
  * otherwise.
  */
char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	char *ptr;

	if (s1 != NULL)
	{
		for (i = 0; s1[i] != '\0'; i++)
		{
		}
	}
	if (s2 != NULL)
	{
		for (j = 0; s2[j] != '\0'; j++)
		{
		}
	}
	ptr = malloc((i + j) * sizeof(*ptr));
	if (ptr != NULL)
	{
		i = 0;
		while (*s1)
		{
			ptr[i] = *s1;
			s1++;
			i++;
		}
		while (*s2)
		{
			ptr[i] = *s2;
			s2++;
			i++;
		}
		ptr[i] = '\0';
		return (ptr);
	}
	else
	{
		return (NULL);
	}
}
