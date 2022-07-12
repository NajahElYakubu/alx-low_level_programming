#include <string.h>
#include "main.h"

/**
 * rev_string - main body
 * Return: 0
 * @s: variable
 */
void rev_string(char *s)
{
	int i = strlen(s) - 1, j = 0;
	char tmp;

	while (i > j)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
		i--;
		j++;
	}
}
