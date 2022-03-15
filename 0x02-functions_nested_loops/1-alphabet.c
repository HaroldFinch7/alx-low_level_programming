#include "main.h"

/**
 * print_alphabet - Prints letters of the alphabet through a for loop,
 * followed by a new line
 *
 * Return: Always void.
 */

void print_alphabet(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		_putchar(alph);
	}

	_putchar('\n');
}
