#include <stdio.h>
#include <stdlib.h>

/**
 *main - program that prints the alphabet in lowercase, and then in uppercase,
 *followed by a new line
 *Return: 0 (Success)
*/

int main(void)
{
	char var;
	char var1;

	for (var = 'a'; var <= 'z'; var++)
		putchar(var);
	for (var1 = 'A'; var1 <= 'Z'; var1++)
		putchar(var1);

	putchar('\n');
	return (0);
}
