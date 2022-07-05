#include "main.h"

/**
 * print_last_digit - prints last digit of number
 * @num: number whose last digit is to be presented
 * Return: result
 */

int print_last_digit(int num)
{
	int result;

	if (num < 0)
		result = -1 * (num % 10);
	else
		result = num % 10;
	_putchar ((result) + '0');
	return (result);
}
