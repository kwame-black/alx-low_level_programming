#include <stdio.h>

/**
 * main -  a program that prints the alphabet in lowercase
 *
 * Return: Always (0)
 */

int main(void)
{
	char alpha1 = 'a';

	while (alpha1 <= 'z')
	{
	putchar(alpha1);
	alpha1++;
	}

	putchar('\n');

	return (0);
}
