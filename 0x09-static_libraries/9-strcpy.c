#include "main.h"

/**
 * *_strcpy - copues the string pointed to by src
 *
 * @dest: char type string
 * @str: char type string
 *
 * Description: Copy the string pointed to by pointer src
 *
 * Return: pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
