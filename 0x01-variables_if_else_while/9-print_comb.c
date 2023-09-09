#include <time.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that prints all possible combinations of singledigit
 * Return: 0
 */

int main(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
	putchar(a);
	if (a != '9')
	{
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
