#include "main.h"

/**
 *reverse_array  - function thas reverse content of array
 *
 * @arr :array of integer
 * @n: the number of elements
 *
 * Return: void
*/

void reverse_array(int *arr, int n)
{
	int i, j, t;

	for (i = 0, j = (n - 1); i < j; i++, j--)
	{
		t = arr[i];
		arr[i] = arr[j];
		arr[j] = t;
	}
}
