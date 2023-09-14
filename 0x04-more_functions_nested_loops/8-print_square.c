#include "main.h"

/**
 * print_square - a function that prints a square
 * @size: The number os squares/number of times
 * Return: empty
 */

void print_square(int size)

{
	int a, b;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size; b++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}