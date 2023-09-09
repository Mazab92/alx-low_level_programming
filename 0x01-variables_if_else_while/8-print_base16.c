#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - a program that prints all the numbers of base 16 in lowercase
 * Return: 0
 */
int main(void)
{
	int all;

	char lop;

	for (all = '0'; all <= '9'; all++)
	putchar(all);

	for (lop = 'a'; lop <= 'f'; lop++)
	putchar(lop);
	putchar('\n');
	return (0);
}
