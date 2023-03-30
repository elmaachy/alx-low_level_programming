#include "main.h"

/**
 * _strcmp - function that compare two string
 *
 * @st1 : first input
 * @st2 : second  input
 *
 * Return: 1 if true, 0 if false
*/

int _strcmp(char *st1, char *st2)
{
	int eql = 0;

	while (*st1)
	{
		if (*st1 != *st2)
		{
			eql = ((int)*st1 - 48) - ((int)*st2 - 48);
			break;
		}
		st1++;
		st2++;
	}
	return (eql);
}
