#include <stdio.h>
/**
*main - prints the size of various types
*Return: 0
*/
int main(void)
{
printf("%s%lu%s\n", "Size of a char: ", sizeof(char), " byte(s)");
printf("%s%lu%s\n", "Size of an int: ", sizeof(int), " byte(s)");
printf("%s%lu%s\n", "Size of a long int: ", sizeof(long), " byte(s)");
printf("%s%lu%s\n", "Size of a long long int: "
		, sizeof(long long), " byte(s)");
printf("%s%lu%s\n", "Size of a float: ", sizeof(float), " byte(s)");
return (0);
}
