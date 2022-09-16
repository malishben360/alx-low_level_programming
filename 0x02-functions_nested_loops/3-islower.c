/**
  * _islower - check the value of c
  *
  * Description: Checks if c is lowercase alphabet
  *
  * @c: The character to be checked
  *
  * Return: Alway 1 is lower and 0 otherwise
  */
int _islower(int c)
{
	if ((c >= 97) && (c <= 122))
	{
		return (1);
	}
	else
		return (0);
}
