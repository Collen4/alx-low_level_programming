#include <stdio.h>

void print(int nb)
{
	if (nb < 0)
	{
		return;
	}
	printf("%d", nb + print(nb - 1));
	nb--;
	return (nb);
}

int main(void)
{
	print(4);
	return (0);
}
