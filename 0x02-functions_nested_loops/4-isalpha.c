/**
  * _isalpha - Checks c
  *
  * Description: Checks if c is an alphabet
  *
  * @c: The character code to check
  *
  * Return: Always 1 if it's alphabet 0 othewise
  */
int _isalpha(int c)
{
	int l, u;

	l = ((c >= 97) && (c <= 122));
	u = ((c >= 65) && (c <= 90));
	if (l || u)
	{
		return (1);
	}
	else
		return (0);
}
