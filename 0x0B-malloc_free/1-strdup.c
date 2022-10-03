#include <stdlib.h>
#include <stddef.h>
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
	char *ptr;

	ptr = malloc(sizeof(*ptr) * 512);
	if (*str != '\0')
	{
		if (ptr != NULL)
		{
			i = 0;
			while (*str)
			{
				ptr[i] = *str;
				str++;
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
	else
	{
		return (NULL);
	}
}
