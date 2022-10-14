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
	char *ptr;

	if (str != NULL && *str)
	{
		for (i = 0; str[i] != '\0'; i++)

		ptr = malloc((i + 1) * sizeof(char));
		if (ptr != NULL)
		{
			i = 0;
			while(str[i] != '\0')
			{
				ptr[i] = str[i];
				i++;
			}
			ptr[i] = '\0';
			return (ptr);
		}
		return (NULL);
	}
	return (NULL);
}
