#include<stdio.h>

/**
 * main - for the description
 * Return: 0
 */
int main(void)
{
	printf("size of char is=%i byte\n", sizeof(char));
	printf("size of int is=%i byte\n", sizeof(int));
	printf("size of signed char is=%i byte\n", sizeof(signed char));
	printf("size of unsigned char is=%i byte\n", sizeof(unsigned char));
	printf("Size of a long int is=%i byte\n", sizeof(long int));
	printf("Size of a long long int is=%i byte\n", sizeof(long long int));
	printf("Size of a float is=%i byte\n", sizeof(float));

	return (0);
}
