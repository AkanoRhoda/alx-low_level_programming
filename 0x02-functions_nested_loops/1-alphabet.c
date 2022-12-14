#include <stdio.h>
#include <unistd.h>
/* betty style doc for function main goes there */
/**
 *  print_alphabet - for the alpha
 *  @print_alphabet - for the letter
 *  main - check the code
 *  @main - for alpha
 *  Return: Always 0 (Success)
 *  print_alphabet - for  beta
 *  @print_alphabet - for the code
 */
int print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}

