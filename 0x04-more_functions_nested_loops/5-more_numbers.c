#include "main.h"
/**
 * more_numbers - printing 10 row from 0 > 14
 *
 * Description: using putchar twice
 *
 *
 *
*/

void more_numbers(void)

{
	int rows, num, count;

	for (rows = 1; rows <= 10; rows++)
	{

	for (count = 0; count <= 14; count++)
	{

		num = count;
			if (count > 9)
			{
			putchar(1 + 48);
			num = count % 10;

			}
			putchar(num + 48);
	}


		putchar('\n');
	}

}
