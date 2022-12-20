#include <stdio.h>


/**
 * print_rev - for rev
 * @s: character
 */

void print_rev(char *s)
{
	if (*s != '\0')
	{
		print_rev(s + 1);
		printf("%c", *s);
	}
}
