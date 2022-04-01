#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments passed
 * @argc: number of arguments passed to main
 * @argv: an array of arguments passed to main
 * Return: Always 0
 */


int main(int argc, __attribute__((__unused__)) char *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
