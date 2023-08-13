#include <stdio.h>

/**
 * main - program that prints all possible combinations of single-digit numbers
 *
 * Return: 0 success
 */

int main(void)

{
	int i;

	for (i = 0; i < 10; i++)

	{
		if (i == 9)
			putchar ('0' + i);
		else
	{
		putchar('0' + i);
		putchar(',');
		putchar(' ');

	}

	}

	return (0);

}
