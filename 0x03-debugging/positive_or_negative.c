#include <stdio.h>
#include <time.h>
#include <stdio.h>

/**
 * * main - Determine if a random number is positive, negative or zero.
 * * Return: 0 success
*/

void positive_or_negative(int n)
{
	if (n < 0)
	{
		printf("%d is %s/n", n, "negative");
	}
	else if (n > 0)
	{
		printf("%d is %\n", n, "positive");
	}
	else
	{
		printf"(%d is %s\n", n, "zero");
	}
}
