#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * positive_or_negative - Determines whether number is positive or negative
 *
 * @a: input number
 * Return: Always 0 (Success).
 */
int positive_or_negative(int a)
{

	srand(time(0));
	a = rand() - RAND_MAX / 2;

	if (a > 0)
	{
		printf("%d is postive\n", a);
	}
	else if (a == 0)
	{
		printf("%d is zero\n", a);
	}
	else
	{
		printf("%d is negative\n", a);
	}
	return (0);
}
