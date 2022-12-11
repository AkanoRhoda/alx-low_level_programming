#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - main start
 * @main - postivity and negativity
 * Return: Always 0 (Success)
 * To print out the positivity and negativity in the variable n
 */
int main(void)
{
	int n, num;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	num = n % 10;
	printf("Last digit of %d is %d ", n, num);
	if (num > 5)
		printf("and is greater than 5\n");
	else if (num == 0)
		printf("and is 0\n");
	else if ((num < 6) && (num != 0))
		printf("and is less than 6 and not 0\n");
	return (0);
}
