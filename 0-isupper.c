#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 *  _isUpper - for uppercase
 *  @c: what been acted opon
 *   @_isUpper - for all
 *   @int c -letter
 *   Return: Always 0 (Success)
 */

int _isUpper(int c)
{

	if (c >= 'A' &&  c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
