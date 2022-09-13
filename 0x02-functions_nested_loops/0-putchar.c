#include "putchar.h"
/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	char *sh = "putchar";

	while (*sh)
	{
		_putchar(*sh);
		sh++;
	}
	_putchar('\n');

	return (0);
}
