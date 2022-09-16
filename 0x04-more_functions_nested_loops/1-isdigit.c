#include "main.h"

/**
 * _isdigit - checks if input is a number between 0 to 9.
 * @n: input number.
 * Return: 1 if is number (0 to 9), 0 in other case.
 */
int _isdigit(int n)
{
	if (n >= 48 && n <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
