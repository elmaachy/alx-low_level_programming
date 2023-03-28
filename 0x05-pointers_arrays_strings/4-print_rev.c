#include "main.h"

/**
 * print_rev - prints reversed string, followed by new line
 *
 * @str : pointer to the string to print
 *
 * Return: Nothing
*/

void print_rev(char *str)
{
	int i = 0;

	while (str[i])
		i++;

	while (i--)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
