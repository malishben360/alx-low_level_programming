/**
  * _abs - Converts
  *
  * @n: Int to convert
  *
  * Description: Converts sign value to unsigned value
  *
  * Return: Always the unsigned value of n
  */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
		return (n * -1);
}
