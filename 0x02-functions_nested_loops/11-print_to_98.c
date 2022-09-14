#include <stdio.h>

/**
 * print_to_98 - Prints all natural number from a to 98.
 *
 * @a: input number.
 * Return: no return.
 */
void print_to_98(int a)
{
	if (a > 98)
	{
		for (; a > 98; a--)
		{
			printf("%d, ", a);
		}
	}
	else if (a < 98)
	{
		for (; a < 98; a++)
		{
			printf("%d, ", a);
		}
	}
	printf("%d\n", a);
}
