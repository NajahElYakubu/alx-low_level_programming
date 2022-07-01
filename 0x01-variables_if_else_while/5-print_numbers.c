#include <stdio.h>

/**
 * main - program that prints all single digit numbers of base 10
 * starting from 0, followed by a new line.
 * Return: 0 (Success)
 */

int main(void)
{
	int var;

	for (var = 0; var < 10; var++)
		printf("%d", var);

	printf("\n");
	return (0);
}
