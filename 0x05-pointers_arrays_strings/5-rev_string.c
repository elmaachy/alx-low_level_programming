#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @str : string input
 *
 * Return: Nothing
*/

void rev_string(char *str)
{
	int l, i;
	char temp;

	for (l = 0; str[l] != '\0'; ++l)

		for (i = 0; i < l / 2; i++)
		{
			temp = str[i];
			str[i] = str[l - 1 - i];
			str[l - 1 - i] = temp;
		}
}
