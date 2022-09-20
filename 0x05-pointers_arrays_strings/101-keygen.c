#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates a keygen.
 *
 * Return: Always 0.
 */
int main(void)
{
	int rnd = 0, ch = 0;
	time_t tm;

	srand((unsigned int) time(&tm));
	while (ch < 2772)
	{
		rnd = rand() % 128;
		if ((ch + rnd) > 2772)
			break;
		ch = ch + rnd;
		printf("%c", rnd);
	}
	printf("%c\n", (2772 - ch));
	return (0);
}
