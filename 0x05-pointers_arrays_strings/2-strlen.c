#include "main.h"

/**
 * _strlen - return the lenght of the string.
 * @s: input thestring.
 * Return: no return.
 */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}
