#include "main.h"

/**
 * main - prints the alphabet - a function that prints the alphabet
 *
 * Return: Always 0
 */

void print_alphabet(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
