#include <stdio.h>
#include "main.h"

/**
 * swap_int - swaps variable values
 * @a: pointer variable to be swapped
 * @b: pointewr variableto be swapped
 * Return: Always void.
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
