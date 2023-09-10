#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - ssign a random number to the variable n
 *
 * Return: Always (0)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
	{
		printf("Last digit of %d is  and is greater than 5", n);
	}
	else if (n == 0)
	{
		printf("Last digit of %d is and is 0", n);
	}
	else if (n < 6 && n != 0)
	{
		printf("Last digit of %d is and is 0", n);
	}

	return (0);
}
