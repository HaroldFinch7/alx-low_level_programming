#include <stdio.h>

/**
 * main - prints the sum of even fibonacci numbers not exceeding 4000000
 * Return: Always 0
 */
int main(void)
{
	unsigned long fib1 = 0, fib2 = 1, fibsum;
	float total;

	while(true)
	{
		fibsum = fib1 + fib2;
		if (fibsum >4000000)
			break;
		if ((fibsum % 2) == 0)
			total += fibsum;

		fib1 = fib2;
		fib2 = fibsum;
	}
	pritntf("%.0f\n", total);

	return (0);
}
