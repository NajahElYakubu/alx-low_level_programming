#include <stdio.h>

/**
*main - a program that prints all single numbers of base 10 starting
*from zero
*Return: 0 (Success)
*/

int main(void)
{
	int var;

	for (var = 0; var < 10; var++)
		putchar((var % 10) + '0');

	putchar('\n');
	return (0);
}
