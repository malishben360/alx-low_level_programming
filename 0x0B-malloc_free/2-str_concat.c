#include "main.h"
#include <stdlib.h>

/**
  * concat - concatenate two non null strings
  * @s1: first string
  * @s2: second string
  *
  * Return: Always a pointer to string else NULL.
  */
char *concat(char *s1, char *s2)
{
	int i;
	int j;
	char *ptr;

	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	ptr = malloc((i + j + 1) * sizeof(char));
	if (ptr != NULL)
	{
		i = 0;
		while (s1[i] != '\0')
		{
			ptr[i] = s1[i];
			i++;
		}
		j = 0;
		while (s2[j] != '\0')

		{
			ptr[i] = s2[j];
			i++;
			j++;
		}
		ptr[i] = '\0';
		return (ptr);
	}
	return (NULL);
}

/**
  * concat_null - duplicate a string to new memory location
  * @s: the string to duplicate
  *
  * Return: Always a pointer to string, else NULL.
  */
char *concat_null(char *s)
{
	int i;
	char *ptr;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	ptr = malloc((i + 1) * sizeof(char));
	if (ptr != NULL)
	{
		i = 0;
		while (s[i] != '\0')
		{
			ptr[i] = s[i];
			i++;
		}
		ptr[i] = '\0';
		return (NULL);
	}
	return (NULL);
}

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
	char *ptr;

	if (s1 != NULL && s2 != NULL)
	{
		ptr = concat(s1, s2);
		if (ptr != NULL)
		{
			return (ptr);
		}
		return (NULL);
	}
	if (s1 != NULL)
	{
		ptr = concat_null(s1);
		if (ptr != NULL)
		{
			return (ptr);
		}
		return (NULL);
	}
	if (s2 != NULL)
	{
		ptr = concat_null(s2);
		if (ptr != NULL)
		{
			return (ptr);
		}
		return (NULL);
	}
	ptr = malloc(sizeof(char));
	if (ptr != NULL)
	{
		ptr[0] = '\0';
		return (ptr);
	}
	return (NULL);
}
