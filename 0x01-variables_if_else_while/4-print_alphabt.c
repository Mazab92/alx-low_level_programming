#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - a program that prints the alphabet in lowercase
 * Return: 0
 */
int main(void)

{
	char alpha, e, q;

	e = 'e';
	q = 'q';

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
	if (alpha != e && alpha != q)
	putchar(alpha);
	}
	putchar('\n');
	return (0);
}
