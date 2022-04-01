#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - prints the multiplication of two arguments
 * @argc: number of arguments passed to main
 * @argv: an array of arguments passed to main
 * Return: 0 if success 1 if error
 */


int main(__attribute__((__unused__)) int argc,  char *argv[])
{
	int a, b;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);

	printf("%d\n", a * b);

	return (0);
}
