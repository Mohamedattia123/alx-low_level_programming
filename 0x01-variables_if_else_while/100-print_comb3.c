#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: printing combinations of two numbers
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	int x = 0;
	int y;

	while (x <= 9)
	{
	y = 0;
	while (y <= 9)
		{
		if (x != y && x < y)
			{
		putchar(x + 48);
		putchar(y + 48);
				if (x != 8 || y != 9)
				{
				putchar(',');
				putchar(' ');
				}

			}

		y++;
		}

		x++;
	}
	putchar('\n');

	return (0);
}
