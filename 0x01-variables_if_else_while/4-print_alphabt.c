#include <stdio.h>
#include <stdlib.h>

/**
 *main -a program that prints the alphabet in lowercase,
 *followed by a new line
 *Return: 0 (Success)
 */

int main(void)
{
	char var;

	for (var = 'a'; var <= 'z'; var++)
	{
		if (var == 'e' || var == 'q')
			continue;
		putchar(var);
	}
	putchar('\n');
	return (0);
}
