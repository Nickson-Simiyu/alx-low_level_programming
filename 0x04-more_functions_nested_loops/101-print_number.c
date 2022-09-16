#include <stdio.h>
#include "main.h"

/**
*print_number- Prints a number
*
*@n: The number to print
*/

void print_number(int n)
{
	int d = 1, i = 0, ii = 0;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	while (n / d != 0)
	{
		d *= 10;
		i++;
	}
	d = d / 10;

	while (ii < i)
	{
		_putchar('0' + n / d);
		n = n - (n / d) * d;
		d = d / 10;
		i++;
	}
	if (i == 0)
		_putchar('0' + n);
}
