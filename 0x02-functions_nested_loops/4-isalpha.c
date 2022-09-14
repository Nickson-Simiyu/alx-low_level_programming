#include "main.h"

/**
*_isalpha - check for alphabetical letters
*
*@c: character to check
*
*Return:0 or 1 depeding on the condition
*/

int _isalpha(int c);
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
