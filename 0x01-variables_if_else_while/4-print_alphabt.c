#include <stdio.h>

/**
 * main - Prints the alphabet without q and e.
 *
 * Return: Always 0 (Success)
 */


int main(void)
{
char alpha;

alpha = 'a';

while (alpha <= 'z')
{
	if (alpha != 'e' && alpha != 'q')
	{
		putchar (alpha);
	}

	alpha++;
}

putchar('\n');
return (0);




}
