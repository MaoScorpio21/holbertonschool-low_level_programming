#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - will assign a random number to the variable n each time it's execute
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d\n is positive", n);
	}
	else if (n < 0)
	{
		printf("%d\n is negative", n);
	}
	else
	{
		printf("%d\n is zero", n);
	}
	return (0);
}
