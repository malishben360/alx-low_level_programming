#include <stddef.h>
#include <stdlib.h>
#include "main.h"

/**
  * _strdup - makes a duplicate of a string
  *
  * @str: the string to duplicate
  *
  * Description: allocate a memory & copy str to it
  *
  * Return: pointer to the new allocated memory, NULL
  * otherwise.
  */
char *_strdup(char *str)
{
	int i;
	char *ptr = "\n";
	char *check = "";

	if (str != NULL)
	{
		if (*str == *check)
		{
			return (ptr);
		}
		for (i = 0; str[i] != '\0'; i++)

		ptr = (char *)malloc(i * sizeof(*ptr));
		if (ptr != NULL)
		{
			i = 0;
			while (*str)
			{
				ptr[i] = *str;
				i++;
				str++;
			}

			return (ptr);
		}

		return (NULL);
	}
	else
	{
		return (NULL);
	}
}
