#include<stdio.h>

/**
 * main - for the description
 * Return: 0
 */
int main(void)
{
	printf("size of a char: %i byte\n", sizeof(char));
	printf("size of an int: %i byte\n", sizeof(int));
	printf("size of a signed char: %i byte\n", sizeof(signed char));
	printf("size of a unsigned char: %i byte\n", sizeof(unsigned char));
	printf("Size of a long int: %i byte\n", sizeof(long int));
	printf("Size of a long long int: %i byte\n", sizeof(long long int));
	printf("Size of a float: %i byte\n", sizeof(float));

	return (0);
}
