#include "main.h"

/**
  * string_toupper - change lowercase character to uppercase
  *
  * @str: string of type char to performe the conversion
  *
  * Description: Check eack char and transforme to uppercase if in lowercase
  *
  * Return: Always the transformed string.
  */
char *string_toupper(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = (char) (str[i] - 32);
		}
		i++;
	}
	return (str);
}
