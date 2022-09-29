#include "main.h"
#include <stddef.h>

/**
  * _strstr - find a match of a substring in a string
  *
  * @haystack: the string to search from
  * @needle: the substring to search for
  *
  * Description: find neeedle in the haystack
  *
  * Return: Always address of needle, NULL otherwise
  */
char *_strstr(char *haystack, char *needle)
{
	int i;

	while(*haystack)
	{
		i = 0;
		if (*haystack == needle[i])
		{
			while (*(haystack + i) == needle[i] && needle[i] && *haystack)
			{
				i++;
			}
			if (!needle[i])
			{
				return (haystack);
			}
		}
		haystack++;
	}
	return (NULL);
}
