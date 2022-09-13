#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * main - Prints _putchar as a message.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char str[] = "_putchar";
	int count = 8;

	for (count = 0; count < 8; count++)
	{
		putchar(str[count]);
	}
	putchar('\n');
	return (0);
}
