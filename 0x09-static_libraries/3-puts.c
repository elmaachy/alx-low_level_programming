#include "main.h"

/**
 * _puts - print a string followed by new line
 *
 * @str : String to print
 *
 * Return: Nothing
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}
