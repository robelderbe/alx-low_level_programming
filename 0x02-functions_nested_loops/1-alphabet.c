#include "main.h"

/**
 * main - prints the alphabet
 *
 * Description: Prints the alphabet with _putchar
 * Return: void
 */

void print_alphabet(void)
{
	char j;

	for (j = 'a'; j <= 'z'; j++)
	{
		_putchar(j);
	}
	_putchar('\n');
}
