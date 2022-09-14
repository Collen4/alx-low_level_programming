#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers
 *
 * Return: Always 0.
 */
int main(void)
{
	int c, boolean, boolean2;
	long int a, b, fb, fb2, aa, bb;

	a = 1;
	b = 2;
	boolean = boolean2 = 1;
	printf("%ld, %ld", a, b);
	for (c = 0; c < 96; c++)
	{
		if (boolean)
		{
			fb = a + b;
			printf(", %ld", fb);
			a = b;
			b = fb;
		}
		else
		{
			if (boolean2)
			{
				aa = a % 1000000000;
				bb = b % 1000000000;
				a = a / 1000000000;
				b = b / 1000000000;
				boolean2 = 0;
			}
			fb2 = (aa + bb);
			fb = a + b + (fb2 / 1000000000);
			printf(", %ld", fb);
			printf("%ld", fb2 % 1000000000);
			a = b;
			aa = bb;
			a = fb;
			bb = (fb2 % 1000000000);
		}
		if (((a + b) < 0) && boolean == 1)
			boolean = 0;
	}
	printf("\n");
	return (0);
}
