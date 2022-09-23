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
	int i, j, num, sign;

	num = 0;
	sign = 1;
	i = _fdigit(str);
	if (i != -1)
	{
		if (str[i - 1] == '-')
			sign = -1;

		j = i - 2;
		while (j >= 0)
		{
			if (str[j] == '-')
			{
				sign = sign * -1;
				break;
			}
			else if (str[j] == '+')
				break;
			else if (str[j] == 32)
				j--;
			else
				break;
		}
		while (str[i] != '\0')
		{
			if (str[i] >= 48 && str[i] <= 57)
				num = num * 10 + str[i] - '0';
			i++;
		}

		num = num * sign;
		return (num);
	}
	else
		return (0);
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
