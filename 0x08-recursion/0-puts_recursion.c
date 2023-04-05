#include "main.h"

/**
 * _puts_recursion: Print a string followed by a new line
 * $*s: pointer a string
 * Return: void
*/

int _puts_recursion(char *s)
{
	if (*s == '\n')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
