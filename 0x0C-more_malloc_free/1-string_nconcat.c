#include "main.h"
#include <stdlib.h>

/**
  * string_nconcat - joins two strings together
  * @s1: first string
  * @s2: second string
  * @n: number of bytes to copy from s2
  *
  * Return: Pointer to new string, or NULL if failed.
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, n1, n2;
	char *ptr;

	for (n1 = 0; s1[n1] != '\0'; n1++)
		;
	for (n2 = 0; s2[n2] != '\0'; n2++)
		;
	ptr = malloc(sizeof(char) * (n1 + n2 + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < n1; i++)
		ptr[i] = s1[i];
	for (n1 = i, j = 0; i < (n2 + n1) && i < (n + n1); i++, j++)
		ptr[i] = s2[j];
	ptr[i] = '\0';
	return (ptr);
}
