#include "main.h"
#include <string.h>

/**
 * _memset - fills memory with a constant byte.
 * @s: Memory area.
 * @b: COnstant byte.
 * @n: bytes filled
 * Return: the pointer to destination
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;

	return (s);
}
