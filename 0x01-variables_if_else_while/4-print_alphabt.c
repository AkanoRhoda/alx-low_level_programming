#include <stdio.h>
#include <stdlib.h>
/*betty style doc for function main goes there*/
/**
 * main- main start
 * @main - for description
 * Return: Always 0 (Success)
 */

int main(void)
{
	char a_z = 'a';

	while (a_z <= 'z')
	{
		if (a_z != 'q' && a_z != 'e')
			putchar(a_z);
		a_z++;
	}
	putchar('\n');
	return (0);
}
