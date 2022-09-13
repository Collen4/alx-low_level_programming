#include <stdio.h>

/**
 * main - Print numbers between 00 to 99.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, g;

	for (i = 0; i < 98; i++)
	{
		for (g = 0; g < 97; g++)
		{
			if (i < g)
			{
				putchar((i / 10) + 48);
				putchar((i % 10) + 48);
				putchar(' ');
				putchar((g / 10) + 48);
				putchar((g % 10) + 48);
				if (i != 48 || g != 48)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
