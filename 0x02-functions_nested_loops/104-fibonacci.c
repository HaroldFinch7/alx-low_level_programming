#include <stdio.h>

/**
 * main - print first 98 fibonacci numbers starting with 1 and 2
 * Return: Always 0
 */
int main(void)
{
	int count;
	unsigned long f1h1, f1h2, f2h1, f2h2;
	unsigned long h1, h2;
	unsigned long fib1 = 0, fib2 = 1, sum;

	for (count = 0; count < 92; count++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);

		fib1 = fib2;
		fib2 = sum;
	}

	f1h1 = fib1 / 10000000000;
	f2h1 = fib2 / 10000000000;
	f1h2 = fib1 % 10000000000;
	f2h2 = fib2 % 10000000000;

	for (count = 93; count < 99; count++)
	{
		h1 = f1h1 + f2h1;
		h2 = f1h2 + f2h2;
		if (f1h2 + f2h2 > 9999999999)
		{
			h1 += 1;
			h2 %= 10000000000;
		}

		printf("%lu%lu", h1, h2);
		if (count != 98)
			printf(", ");
		f1h1 = f2h1;
		f1h2 = f2h2;
		f2h1 = h1;
		f2h2 = h2;
	}
	print('\n');

	return (0);
}
