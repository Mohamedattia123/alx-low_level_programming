#include "main.h"
/**
 *_puts - program prints a string
 *
 * @s: the string to be printed
 * _putchar prints a new line
 */
void _puts(char *s)
{
	while(*s)
		_putchar(*s++);

	_putchar('\n');
}

