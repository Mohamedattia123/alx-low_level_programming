#include "main.h"

/**
 * print_diagonal - printing a diagonal line
 *
 * @n: number of times the \ should be printed
 *
*/

void print_diagonal(int n)
{
	int postn, space;

	if (n <= 0)
		_putchar('\n');
	else
	{
			for (postn = 1; postn <= n; postn++)
		{
			for (space = 1; space <= postn; space++)
			{
				_putchar(' ');
				_putchar('\\'); /*is equal to '/' char*/



			}
				_putchar('\n');

		}





	}


}
