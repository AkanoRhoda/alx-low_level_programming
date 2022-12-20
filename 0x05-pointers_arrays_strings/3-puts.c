#include <stdio.h>

/**
 * _puts - to put
 * @str: for char
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\n' && str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}
