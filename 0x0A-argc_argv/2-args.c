#include <stdio.h>

/**
 * main - main body
 * @argc: argument
 * @argv: argument array
 * Return: 0 (Success)
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
