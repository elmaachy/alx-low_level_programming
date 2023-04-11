#include "main.h"

/**
 * _strncpy - function that copies string
 *
 * @dest : pointer to destination input
 * @src : pinter to source input
 * @n: number of bytes from @src
 *
 * Return: @dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
