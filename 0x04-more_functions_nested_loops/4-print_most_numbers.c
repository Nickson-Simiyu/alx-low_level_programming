#include "main.h"

/**
*print_most_numbers- prints the numbers
*
*except 2 and 4, followed by a new line
*/

void print_most_numbers(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		if (x != 2 && x != 4)
		{
			_putchar('0' + x);
		}
	}
	_putchar('\n');
}
