#include <stdio.h>

/**
*main - main body of the program
*Return: 0 (Success)
*/

int main(void)

{

	int var;

	for (var = 0; var < 10; var++)
	{
		putcher((var % 10) + '0');
		if (var >= 0 && var < 9)
		{
			putchar(',');
			putchar(' ');
		}
		else
			continue;

	}
	putchar('\n');
	return (0);
}
