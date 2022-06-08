#include "main.h"

/**
 * print_last_digit - prints last digit of integer input
 * @n: integer to modify
 *
 * Return: 0
 */

int print_last_digit(int n)
{
	int result = n % 10;

	if (result < 0)
		result *= -1;
	_putchar('0' + result);
	return (result);
}
