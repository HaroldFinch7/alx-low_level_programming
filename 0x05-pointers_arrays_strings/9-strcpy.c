#include "main.h"
/**
 * _strcpy - cpoies the string pointed to by src
 * @src: pointer to string
 * @dest: pointer to buffer
 * Return: void
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
