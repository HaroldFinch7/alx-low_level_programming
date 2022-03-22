#include <stdio.h>
#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to be counted
 * Return: Always the length of string.
 */
int _strlen(char *s)
{
	int l = 0;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		l++;
	}
	return (l);

}
