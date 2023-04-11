#include "main.h"

/**
 * _abs - Entry function
 *
 * Description: function that computes the absolute value of an integer
 *
 * @n: checks input of function
 *
 * Return: Retruns absolute value of integer
*/

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
