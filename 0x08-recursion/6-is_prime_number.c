#include "main.h"

/**
 * is_prime_number - a function returns 1 if prime number, otherwise return 0
 * @n: int
 * Return: 1 if prime, 0 otherwise
 */

int is_prime_number(int n)

{
	return is_prime_recursive(n, 2);
}

/**
 * is_prime_recursive - helper function to check if a number is prime
 * @n: int
 * @divisor: int
 * Return: 1 if prime, 0 otherwise
 */

int is_prime_recursive(int n, int divisor)

{
	if (n <= 1)
		return (0);
	if (n <= 3)
		return (1);
	if (n % 2 == 0 || n % 3 == 0)
		return (0);
	if (divisor * divisor > n)
		return (1);
	if (n % divisor == 0)
		return (0);
	return is_prime_recursive(n, divisor + 1);
}
