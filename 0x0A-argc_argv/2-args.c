#include "main.h"

/**
 * main - prints all arguments it receive.
 * @argc: number of command line arguments.
 * @argv: array that contains the proram command line arguments.
 * Return: 0 -success.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
