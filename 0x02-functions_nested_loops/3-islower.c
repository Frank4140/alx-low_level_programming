#include "main.h"

/**
 * _islower -c program that checks for lowercase character
 *
 * Return: 1 for lowercase character and 0 if otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);

}
