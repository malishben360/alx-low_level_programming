#include "main.h"
#include <stdlib.h>

/**
  * cap_string - Capitalize the first character of each word
  *
  * @str: the string of type char to be capitalized
  *
  * Description: Capitalize the first char of each word using some chars
  *
  * Return: Always the capitalized string.
  */
char *cap_string(char *str)
{
	int i;
	char c;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		c = str[i + 1];
		if (c >= 97 && c <= 122)
			switch (str[i])
			{
				case ' ':
					(str[i + 1] = c - 97 + 65);
					break;
				case '	':
					str[i + 1] = c - 97 + 65;
					break;
				case '\n':
					str[i + 1] = c - 97 + 65;
					break;
				case ',':
					str[i + 1] = c - 97 + 65;
					break;
				case ';':
					str[i + 1] = c - 97 + 65;
					break;
				case '.':
					str[i + 1] = c - 97 + 65;
					break;
				case '!':
					str[i + 1] = c - 97 + 65;
					break;
				case '?':
					str[i + 1] = c - 97 + 65;
					break;
				case '"':
					str[i + 1] = c - 97 + 65;
					break;
				case '(':
					str[i + 1] = c - 97 + 65;
					break;
				case ')':
					str[i + 1] = c - 97 + 65;
					break;
				case '{':
					str[i + 1] = c - 97 + 65;
					break;
				case '}':
					str[i + 1] = c - 97 + 65;
					break;
			}
	}
	return (str);
}
