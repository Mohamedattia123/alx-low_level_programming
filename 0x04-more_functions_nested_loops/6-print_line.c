#include "main.h"
/**
 * print_line - printing straight line
 *
 * using putchar
 *
 *@n: number of lines
*/
void print_line(int n)
{
	int lnchr;

	if (n <= 0)
	_putchar('\n');
		else
	{
		for (lnchr = 1; lnchr <= n; lnchr++)
		_putchar('_');
		_putchar('\n');
	}

}
