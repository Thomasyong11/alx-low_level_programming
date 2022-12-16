#include "main.h"

/**
 * _isupper - a function that checks for uppercase character
 * @c: input character.
 *  Return: 1 if is an uppercase character, 0 in other case.
 */
int _isupper(int c)
{
if ((c >= 'A') && (c <= 'Z'))
return (1);
else
return (0);
}
