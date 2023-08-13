#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - A C program that assigns random numbers to variable n
 *
 * Return: 0 success
 */

int main(void)

{

	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	printf("%d is positve\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);

}
