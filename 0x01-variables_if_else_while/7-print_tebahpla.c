#include <stdio.h>

/**
*main - main body
*Return: 0 (Success)
*/

int main(void)
{

	char var;

	for (var = 'a'; var = 'z'; var--)
		putchar(var);

	putchar('\n');
	return (0);
}
