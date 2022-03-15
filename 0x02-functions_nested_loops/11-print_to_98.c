#include <stdio.h>

/**
 * print_to_98 -prints to 98 separated by comma and space
 * @n: the number to start with
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}

	else
	{
		while (n < 98)
			print("%d, ", n++);
		print("%d\n", n);
	}
}
