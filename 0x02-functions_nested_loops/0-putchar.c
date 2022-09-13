#include "main.h"
<<<<<<< HEAD
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * main - Prints _putchar as a message.
=======

/**
 * main - prints _putchar as a message.
>>>>>>> main
 *
 * Return: Always 0 (Success)
 */

<<<<<<< HEAD
int main(void)
{
	char str[] = "_putchar";
	int count = 8;

	for (count = 0; count < 8; count++)
	{
		putchar(str[count]);
	}
	putchar('\n');
=======
int  main(void)
{
	int str[] = {95, 112, 117, 116, 99, 104, 97, 114};
	int count, sz;

	sz = sizeof(str) / sizeof(int);

	for (count = 0; count < sz; count++)
	{
		_putchar(str[count]);
	}
	_putchar('\n');
>>>>>>> main
	return (0);
}
