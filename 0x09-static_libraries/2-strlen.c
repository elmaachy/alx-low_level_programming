#include "main.h"

/**
 * int _strlen - length of a string
 *
 * @s: input params
 *
 * Return: Length of string
*/

int _strlen(char *s)
{
	int c;

	for (c = 0; *s != '\0'; s++)
		++c;
	return (c);
}
