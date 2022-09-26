#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string.
 * @needle: substring.
 * Return: pointer to the located substring or
 * NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *strhaystack;
	char *strneedle;

	while (*haystack != '\0')
	{
		strhaystack = haystack;
		strneedle = needle;

		while (*haystack != '\0' && *strneedle != '\0' && *haystack == *strneedle)
		{
			haystack++;
			strneedle++;
		}
		if (!*strneedle)
			return (strhaystack);
		haystack = strhaystack + 1;
	}
	return (0);
}
