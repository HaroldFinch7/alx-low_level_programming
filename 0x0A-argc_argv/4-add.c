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
	int a, num, b = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (num = 1; num < argc; num++)
	{
		for (a = 0; argv[num][a]; a++)
		{
			if (argv[num][a] < '0' || argv[num][a] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		b += atoi(argv[num]);
	}
	printf("%d\n", b);

	return (0);
}
