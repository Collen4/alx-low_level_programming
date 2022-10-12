#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: ALways 0.
 */
int main(void)
{
	dog_t *m;

	m = new_dog("Poppy", 3.5, "Bob");
	printf("My name is %s, and I am %.1f :) - Woof!\n", m->name, m->age);
	return (0);
}
