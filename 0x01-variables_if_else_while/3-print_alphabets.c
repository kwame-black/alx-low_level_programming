#include <stdio.h>

/**
 * main - : Lower then upper alphabet
 *
 * Return: Always (0)
 */

int main(void)
{
	char low = 'a';
	char high = 'A';

	while (low <= 'z')
	{
	putchar(low);
	low++;
	}

	while (high <= 'Z')
	{
		putchar(high);
		high++;
	}

	putchar('\n');
	return (0);
}
