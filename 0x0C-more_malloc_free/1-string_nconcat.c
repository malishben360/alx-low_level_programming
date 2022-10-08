#include "main.h"
#include <stdlib.h>

char *s1_null(char *s1);
char *s2_null(char *s2, unsigned int n);
char *f_concat(char *s1, char *s2);
char *n_concat(char *s1, char *s2, unsigned int n);

/**
  * string_nconcat - join two string together
  * @s1: the first string to concatenate
  * @s2: the second string to concatenate
  * @n: number of bytes to concatenate from s2
  *
  * Description: Concatenate n bytes from s2 to s1 in
  * a new memory location
  *
  * Return: char pointer, NULL otherwise.
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	char *ptr;

	if ((s1 == NULL && *s1 == '\0') && (s2 == NULL && *s2 == '\0'))
	{
		ptr = malloc(sizeof(char));
		ptr[0] = '\0';
		return (ptr);
	}
	else if ((s1 != NULL && *s1 != '\0') && (s2 != NULL && *s2 != '\0'))
	{
		for (i = 0; s2[i] != '\0'; i++)

		if (n < i)
		{
			return (f_concat(s1, s2));
		}
		else
		{
			return (n_concat(s1, s2, n));
		}
		exit(98);
	}
	else if (s1 != NULL && *s1 != '\0')
	{
		return (s1_null(s1));
	}
	else
	{
		return (s2_null(s2, n));
	}
	exit(98);
}

/**
  * s1_null - concatenate for s1
  *@s1: the string to concat
  *
  * Return: Aways pointer, NULL otherwise
  */
char *s1_null(char *s1)
{
	int i;
	char *ptr;

	for (i = 0; s1[i] != '\0'; i++)

	ptr = malloc((i + 1) * sizeof(char));
	if (ptr != NULL)
	{
		i = 0;
		while (*s1)
		{
			ptr[i] = *s1;
			s1++;
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

/**
  * s2_null - copy n bytes of s2
  * @s2: the string to copy
  * @n: integer
  * Return: Always a pointer, NULL otherwise
  */
char *s2_null(char *s2, unsigned int n)
{
	unsigned int i, j;
	char *ptr;

	for (i = 0; s2[i] != '\0'; i++)

	ptr = malloc((i + 1) * sizeof(char));
	if (ptr != NULL)
	{
		j = 0;
		while (s2[j] != '\0' && j < i && j < n)
		{
			ptr[j] = s2[j];
			j++;
		}
		ptr[j] = '\0';
		return (ptr);
	}
	else
	{
		return (NULL);
	}
}

/**
  * f_concat - concatenate s2 to s1 in a new memory
  * @s1: first string
  * @s2: second string
  *
  * Return: Always a pointer, NULL otherwise.
  */
char *f_concat(char *s1, char *s2)
{
	int i, j;
	char *ptr;

	for (i = 0; s1[i] != '\0'; i++)

	for (j = 0; s2[j] != '\0'; j++)

	ptr = malloc((i + j + 1) * sizeof(char));
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

/**
  * n_concat - join s1 & n s2 char in new memory
  * @s1: first string
  * @s2: second string
  * @n: integer
  *
  * Return: Always a pointer, NULL otherwise.
  */
char *n_concat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *ptr;

	for (i = 0; s1[i] != '\0'; i++)

	ptr = malloc((i + n + 1) * sizeof(char));
	if (ptr != NULL)
	{
		i = 0;
		while (*s1 != '\0')
		{
			ptr[i] = *s1;
			s1++;
			i++;
		}
		j = 0;
		while (j < n)
		{
			ptr[i] = *s2;
			s2++;
			i++;
			j++;
		}
		ptr[i] = '\0';
		return (ptr);
	}
	else
	{
		return (NULL);
	}
}
