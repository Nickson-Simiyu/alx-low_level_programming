#include "main.h"

/**
*print_numbers- prints the numbers, from 0 to 9,
*
*followed by a new line
*/

void print_numbers(void)
{
	char n = 0;

	while (n <= 9)
	{
		if (n != 2 && n != 4)
		{
			_putchar('0' + n);
		}

		n++;

	}
	_putchar('\n');
}