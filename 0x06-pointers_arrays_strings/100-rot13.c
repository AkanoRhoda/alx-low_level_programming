#include <stdio.h>

/**
 * rot13 - for the rot encoding
 * @m: for the m value
 * Return: values for cn
 */

char *rot13(char *m)
{
	int cn = "";

	for (i = 0; i < m.length(); i++)
	{
		if (isupper(m[i]))
		{
			cn += (m[i] - 'A' + 13) % 26 + 'A';
		}
		else if (islower(m[i]))
		{
			cn += (m[i] - 'a' + 13) % 26 + 'a';
		}
		else
		{
			cn += m[i];
		}
	}
	return (cn);
}
