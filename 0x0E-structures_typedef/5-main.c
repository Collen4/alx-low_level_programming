#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	dog_t *my;

	my = new_dog("Poppy", 3.5, "Bob");
	printf("My name is %s, and I am %.1f :) - Woof!\n", my->name, my->age);
	free_dog(my);
	return (0);
}
