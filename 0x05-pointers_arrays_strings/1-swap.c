#include "main.h"

/**
 * swap_int - swaps the value of 2
 * int using 2 parms
 *
 * @a: input params 1
 * @b:input params 2
 *
 * Return: Nothing
*/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
