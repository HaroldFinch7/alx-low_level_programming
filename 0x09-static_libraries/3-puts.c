#include "main.h"

/**
 * _puts - Locates a substring.
 * @s: The string to be searched.
 *
 * Return: nothing
 */

void _puts(char *s)
{
	int i;

	for (i = 0; s[i] != 0; i++)
	{
		_putchar(s[i]);
	}

	_putchar('\n');

}
