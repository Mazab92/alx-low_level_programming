#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - a program that prints the alphabet in lowercase, and in uppercase
 * Return: 0
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	putchar(alpha);

	for (alpha = 'A'; alpha <= 'Z'; alpha++)
	putchar(alpha);
	putchar('\n');

	return (0);
}
