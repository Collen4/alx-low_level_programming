#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 *
 * @a: input number as an integer.
 *
 * Return: last digit.
 */
int print_last_digit(int a)
{
	int l;

	l = a % 10;

	if (l < 0)
	{
		_putchar(-1 + 48);
		return (-1);
	}
	else
	{
		_putchar(1 + 48);
		return (l);
	}
}
