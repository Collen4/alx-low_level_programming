#include "main.h"

/**
 * _atoi - converts string to an integer.
 * @str: input string.
 * Return: Integer.
 */
int _atoi(char *str)
{
	unsigned int count = 0, size = 0, oi = 0, pm = 1, m = 1, i;

	while (*(str + count) != '\0')
	{
		if (size > 0 && (*(str + count) < '0' || *(str + count) > '9'))
			break;

		if (*(str + count) == '-')
			pm *= -1;

		if ((*(str + count) >= '0') && (*(str + count) <= '9'))
		{
			if (size > 0)
				m *= 10;
			size++;
		}
		count++;
	}

	for (i = count - size; i < count; i++)
	{
		oi = oi + ((*(str + i) - 48) * m);
		m /= 10;
	}
	return (oi * pm);
}
