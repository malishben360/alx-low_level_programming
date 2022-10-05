#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int min_coins(int *coins, int m, int k);

/**
  * main - Entry point
  *
  * @argc: the number of arguments passed to main
  * @argv: the array of arguments passed to main
  *
  * Description: compute the maximun amount of change
  *
  * Return: Always 0 (Success), and 1 (Failure).
  */
int main(int argc, char *argv[])
{
	int mincnt;
	int k;

	int m = 5;
	int coins[5] = {25, 10, 5, 2, 1};

	if (!(argc == 1 || argc > 2))
	{
		k = atoi(argv[1]);
		mincnt = min_coins(coins, m, k);
		printf("%d\n", mincnt);

		return (0);
	}
	else
	{
		printf("Error\n");

		return (1);
	}
}

/**
  * min_coins - compute the minimun change of a given
  * amount
  *
  * @coins: array of coins (denominations)
  * @k: amount to be change
  * @m: size of array coins
  *
  * Description: using recursion as brute-force
  * approach by reduce and conquare
  *
  * Return: Always positive integer (Success),
  * -1 (Failure).
  */
int min_coins(int *coins, int m, int k)
{
	int i;
	int mincnt;
	int curcnt;

	if (k == 0)
	{
		return (0);
	}

	mincnt = 256;
	for (i = 0; i < m; i++)
	{
		if (coins[i] <= k)
		{
			curcnt = min_coins(coins, m, k - coins[i]);
			if (curcnt != 256 && (curcnt + 1) < mincnt)
			{
				mincnt = curcnt + 1;
			}
		}
	}
	if (mincnt == 256)
	{
		return (-1);
	}
	else
	{
		return (mincnt);
	}
}
