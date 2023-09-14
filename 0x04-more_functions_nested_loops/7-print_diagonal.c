#include "main.h"


/**
 * print_diagonal - a function that draws a diagonal line
 * @n: The number of times to print diagonal lines
 * Return: empty
 */

void print_diagonal(int n)

{
	int a, b;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < n; a++)
		{
			for (b = 0; b < a; a++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
