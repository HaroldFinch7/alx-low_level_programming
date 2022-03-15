#include <stdio.h>

/**
 * main - list natural numbers below 1024,
 * multip0les of 3 and 5
 *
 * Retun: Always 0.
 */
int main(void)
{
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			sum += i;
	}

	printf("%d\n", sum);

	return (0);
}
