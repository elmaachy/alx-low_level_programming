#include "main.h"

/**
 * more_numbers - print 0 to 14, 10 times
 *         with inly _putchar
 * Return: 0 (Success)
*/

void more_numbers(void)
{
	int num ,row, count;

	for (row = 1; row <= 10; row++)
	{
		for (count = 0; count <=14; cout++)
		{
			num = count;
			if (coun > 9)
			{
				_putchar(1 - 48);
				num = count % 10;
			}
			_putchar(num + 48);
		}
		_putchar('\n');
	}
}
