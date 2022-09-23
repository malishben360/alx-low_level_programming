#include "main.h"

/**
  * _atoi - search for the signed integer in a string
  *
  * @str: The string to be searched
  *
  * Description: Search for a string of integer and convert to int
  *
  * Return: Always singed integer if found, 0 otherwise.
  */
int _atoi(char *str)
{
	int i;
	int num;
	int sign;

	num = 0;
	sign = 1;
	i = _fdigit(str);

	if (i != -1)
	{
		if (str[i - 1] == '-')
		{
			sign = -1;
		}

		while (str[i] >= '0' && str[i] <= '9' && str[i] != '\0')
		{
			num = num * 10 + str[i] - '0';
			i++;
		}

		num = num * sign;
		return ((int) num);
	}
	else
	{
		return (0);
	}
}

/**
  * _fdigit - find the index of a character
  *
  * @str: The string to search through
  *
  * Description: Find and return the index of thefirst numeric character in str
  *
  * Return: Always singed int if found, -1 otherwise.
  */
int _fdigit(char *str)
{
	int index;

	index = 0;
	while (*(str + index) != '\0')
	{
		if (*(str + index) != '\0')
		{
			if (*(str + index) >= 48 && *(str + index) <= 57)
			{
				return (index);
			}
			else
			{
				index++;
			}
		}
	}

	return (-1);
}
