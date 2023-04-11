#include "main.h"

/**
 * _isalpha - Entry function
 *
 * Description:  function to check if character is lowercase or uppercase
 *
 * @c: checks input of function
 *
 * Return: Retruns 1 if 'c' is true else 0
*/

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}
