/**
 * print_sign - Entry function
 *
 * Description:  function to prints the sign of a number
 *
 * @n: checks input of function
 *
 * Return: Returns 1 and print + if n > 0
 *         Returns 0 and pritn 0 if n = 0
 *         Return -1 and print - if n < 0
*/

int print_sign(int n)
{
	if (n > 0)
	{
		printf("+");
		return (1);
	}
	if (n == 0)
	{
		printf("0");
		return (0);
	}
	printf("-");
	return (-1);
}
