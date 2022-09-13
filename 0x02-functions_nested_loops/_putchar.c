#include <unistd.h>
#include "main.h"

/**
<<<<<<< HEAD
 * _putchar - write the character c to stdout.
 *
 * @c: the character to print
 * Return: On success 1
 * On erro: -1 is returned
=======
 * _putchar - writes the character c to stdout
 * @c: The character to be printed
 *
 * Return: On success 1.
 * On error: -1 is returned
>>>>>>> main
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
