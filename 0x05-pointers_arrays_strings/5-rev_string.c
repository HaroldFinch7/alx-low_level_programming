#include "main.h"

/**
 * rev_string -function that reverses a string.
 * @s: character.
 */

void rev_string(char *s)
{
	char t;
	int i;
	int x = 0;
	int y = 0;

	while (s[x] != '\0')
	{
		x++;
	}
	y = x - 1;

	for (i = 0; i < x / 2; i++)
	{
		t = s[i];
		s[i] = s[y];
		s[y--] = t;
	}
}
