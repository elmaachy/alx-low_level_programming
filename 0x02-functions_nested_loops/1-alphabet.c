#include "main.h"

/**
 * print_alphabet - use on the _putchar fonction to print
 *                  tha aplphabet a-z
*/

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
