#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: character to print
 *
 * Return: 1 if success
 *         -1 if error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
