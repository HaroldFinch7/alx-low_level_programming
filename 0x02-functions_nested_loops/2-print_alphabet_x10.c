#include "main.h"

/**
 * print_alphabet_x10 - Prints letters of the alphabet 10 times t
 * hrough a for loop,
 * followed a line
 *
 * Return: Always void.
 */

void print_alphabet_x10(void)
{
	char alph;
	int i;

	for (i = 1; i <= 10; i++)
	{
		for (alph = 'a'; alph <= 'z'; alph++)
		{
			_putchar(alph);
		}
		_putchar('\n');
	}

}
