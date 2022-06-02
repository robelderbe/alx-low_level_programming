#include <stdio.h>

/**
 * main - Run main function
 *
 * description: prints the size of varios types
 * Return: 0 if exited properly
 */
int main(void)
{
                    int int;
                    char char;
                    long int long int ;
                    float float;
                    long long int long long int;
        printf("size of a char: %d bytes(s)\n", sizeof(char));
	printf("size of an int: %d bytes(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
	printf("Size of a float: %d byte(s)\n", sizeof(float));
	return (0);
}
