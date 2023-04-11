#include "main.h"

/**
 * _islower - Entry function
 *
 * Description:  function to check if character is lowercase
 *
 * @c: checks input of function
 *
 * Return: Retruns 1 if 'c' is lowedcase otherwise always 0 (Success)
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
