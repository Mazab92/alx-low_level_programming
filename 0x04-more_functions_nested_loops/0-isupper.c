#include "main.h"

/**
 * _isupper - a function that checks for uppercase character
 * @x: The number to be checked
 * Return: 1 for upper letter or 0 for any else
 */

int _isupper(int x)

{
	if (x >= 65 && x <= 90)
	{
	return (1);
	}
	return (0);
}
