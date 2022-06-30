#include <stdio.h>
/**
*main - prints the size of various types
*Return: 0
*/
int main(void)
{
printf("%s%lu%s\n", "size of a char: ", sizeof(char), " byte(s)");
printf("%s%lu%s\n", "size of an int: ", sizeof(int), " byte(s)");
printf("%s%lu%s\n", "size of a long int: ", sizeof(long), " byte(s)");
printf("%s%lu%s\n", "size of a long long int: ", sizeof(char), " byte(s)");
printf("%s%lu%s\n", "size of a char: ", sizeof(char), " byte(s)");
return (0);
}
