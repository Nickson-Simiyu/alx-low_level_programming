#include "main.h"

/**
*print_last_digit - return last digit
*
*@n:number to check
*
*Return:0 or 1
*/

int print_last_digit(int n)
{
	int x;

	if (n < 0)
		n = -1;
	x = n % 10;
	_putchar('0' + x);
	return (x);
}
