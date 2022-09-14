#include <stdio.h>

/**
 * main - Prints the sum of the even numbers in fibonacci
 *
 * Return: Always 0.
 */
int main(void)
{
	long int a, b, fb, afb;

	a = 1;
	b = 2;
	fb = afb = 0;

	while (fb <= 4000000)
	{
		fb = a + b;
		a = b;
		b = fb;
		if ((a % 2) == 0)
		{
			afb += a;
		}
	}
	printf("%ld\n", afb);
	return (0);
}
