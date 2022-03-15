#include "main.h"

/**
 * print_last_digit - checks if a character is an alphabet
 * @n: the number to be checked
 * Return: the last digit
 */

int print_last_digit(int n)
{
	int last = n % 10;

	if (last < 0)
	{
		last *= -1;
	}

	_putchar(last + '0');

	return (last);
	}

}
