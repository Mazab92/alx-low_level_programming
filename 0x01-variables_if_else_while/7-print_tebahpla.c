#include <time.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that prints the lowercase alphabet in reverse
 * Return: 0
 */

int main(void)
{
	char rev;

	for (rev = 'z'; rev >= 'a'; rev--)
	putchar(rev);
	putchar('\n');
	return (0);
}
