#include "main.h"

/**
 * _isalpha - a program that checks for alphabetic character
 * @c: the character to be checked
 *
 * Return: 1 for lowercase character and 0 if otherwise
 */

int _isalpha(int c)
{
if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);
}
