#include "main.h"
#include <ctype.h>

/**
 * islower - checks for lower case of argument
 * @c: Th value to be checked
 * Description: The functions checks and return value base* on check the values
 * Return: 1 if int c is lowercase, 0 if otherwise
 *
 */

int _islower(int c)
{
	if (c > 'a' && c < 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
