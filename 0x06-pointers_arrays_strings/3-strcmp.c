#include "main.h"

/**
  * _strcmp - compare two string if the are equal
  *
  * @s1: The first string to be compare to
  * @s2: The second string to be compare against
  *
  * Description: The compare string s1 each char against string s2 each char
  *
  * Return: Alway the difference between the last compared char of s1 to s2.
  */
int _strcmp(char *s1, char *s2)
{
	int dif;

	while (*s1)
	{
		if (*s1 != *s2)
			break;
		s1++;
		s2++;
	}
	dif = *s1 - *s2;
	return ((int) dif);
}
