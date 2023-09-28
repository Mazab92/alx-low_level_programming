#include "main.h"

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: int
 * @sr:  square root
 * Return: int
 */

int square(int n, int sr);
int _sqrt_recursion(int n)

{
	return (square(n, 1));
}

/**
 * square - find square root
 * @n: int to find square root
 * @sr: square root
 * Return: int
 */

int square(int n, int sr)
{
	if (sr * sr == n)
		return (sr);
	if (sr * sr < n)
		return (square(n, sr + 1));
	return (-1);
}
