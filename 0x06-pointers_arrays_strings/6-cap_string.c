#include "main.h"

/**
 * cap_string - capitaliswes all the letters of a string
 * @str: input string
 * Return: the pointer to dest
 */

char *cap_string(char *str)
{
	int index = 0;

	while (str[index])
	{
		while (!(str[i] >= 'a' && str[i] <= 'z'))
			index++;

		if (str[index - 1] == ' ' ||
				str[index - 1] == '\t' ||
				str[index - 1] == '\n' ||
				str[index - 1] == ',' ||
				str[index - 1] == ';' ||
				str[index - 1] == '.' ||
				str[index - 1] == '!' ||
				str[index - 1] == '"' ||
				str[index - 1] == '(' ||
				str[index - 1] == ')' ||
				str[index - 1] == '{' ||
				str[index - 1] == '}' ||
				index == 0)
			str[index] -= 32;
		index++;
	}
	return (str);
}
