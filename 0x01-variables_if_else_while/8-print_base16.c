#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 success
 */

int main(void)

{

	char i;
	char j;

	for (i = 0; i < 10; i++)
		putchar('0' + i);
	for (j = 'a'; j <= 'f'; j++)
		putchar (j);
	putchar('\n');
	return (0);

}
