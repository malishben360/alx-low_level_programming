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
	unsigned int i = 0, j = 0, n1 = 0, n2 = 0;
	char *ptr;

	if (s1 != NULL)
	for (; s1[n1] != '\0'; n1++)
		;
	if (s2 != NULL)
	for (; s2[n2] != '\0'; n2++)
		;
	ptr = malloc(sizeof(char) * (n1 + n2 + 1));
	if (ptr == NULL)
		return (NULL);
	if (s1 != NULL)
	for (i = 0; i < n1; i++)
		ptr[i] = s1[i];
	if (s2 != NULL)
	for (n1 = i, j = 0; i < (n2 + n1) && i < (n + n1); i++, j++)
		ptr[i] = s2[j];
	ptr[i] = '\0';
	return (ptr);
}
