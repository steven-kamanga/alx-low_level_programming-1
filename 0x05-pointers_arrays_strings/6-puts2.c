#include "main.h"

/**
 * puts2 - the working function
 * @s: The string to check
 *
 * Return void
 */

void puts2(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
	}
}
