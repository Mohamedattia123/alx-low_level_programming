#include "main.h"

/**
 * print_most_numbers - print char c
 *
 * using _putchar twice print from 0 > 9
 *
 * Return: return 0 (success)
*/

void print_most_numbers(void)

{
	char c = 0;

	for (c >= 0; c <= 9;)
	{
	if (c != 2 || c != 4)
		{
	_putchar(c + 48);

		}
	c++;
	}

	_putchar('\n');

}
