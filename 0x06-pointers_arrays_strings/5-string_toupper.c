#include "main.h"

/**
 * *string_toupper - change letters of string to upper
 *
 * @str: string to input
 *
 * Return: string
*/
char *string_toupper(char *str)
{
	int i;

	for (i = 0; srt[i] != '\0'; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}
