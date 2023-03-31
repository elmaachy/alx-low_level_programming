#include "main.h"
#include <stdio.h>

/**
 * isLower - check c is lowercase
 * @c: char
 * Return: 1 if true else 0
*/

int isLower(char c)
{
	return (c >= 97 && c <= 122);
}

/**
 * isDelimiter - check is delimiter
 * @c: char
 * Return: 1 if true else 0
*/

int isDelimiter(char c)
{
	int i;
	char delimiter[] = " \t\n,.!?\"(){}";

	for (i = 0; i < 12; i++)
		if (c == delimiter[i])
			return (i);
	return (0);
}

/**
 * *cap_string - capitalizes all words of a string
 * @str: input string
 * Return: string with capitalized words
*/

char *cap_string(char *str)
{
	char *ptr = str;
	int foundDelimit = 1;

	while (*str)
	{
		if (isDelimiter(*str))
			foundDelimit = 1;
		else if (isLower(*str) && foundDelimit)
		{
			*str -= 32;
			foundDelimit = 0;
		}
		else
			foundDelimit = 0;
		str++;
	}
	return (ptr);
}
