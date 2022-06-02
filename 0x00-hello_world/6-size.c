#include <stdio.h>

/**
 * main:Run main function
 *
 *Description: prints the size of varios types
 * Return: 0 if exited properly
 */
int main(void)
{
	int a;
	char c;
	long log int b;
	log int d;
	float f;
        printf("size of a char: %d bytes(s)\n",(unsigned long) sizeof(c));
	printf("size of an int: %d bytes(s)\n", (unsigned long)sizeof(a));
	printf("Size of a long int: %d byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of a long long int: %d byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of a float: %d byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
