#include "main.h"

/**
 * _isupper - verify is c is uppercase
 * @c: input c
 * Return: 1 if c its uppercase else return 0
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
