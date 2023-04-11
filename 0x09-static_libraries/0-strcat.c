#include "main.h"

/**
 * _strcat - function concat two string
 *
 * @dest: pointer to destination input
 * @src: pinter to source input
 *
 * Return: result pointer string @dest
*/

char *_strcat(char *dest, char *src)
{
	int c, c2;

	c = 0;
	while (dest[c])
		c++;
	for (c2 = 0; src[c2] ; c2++)
		dest[c++] = src[c2];
	return (dest);
}
