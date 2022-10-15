#include <stdio.h>

/**
 *main - print lowercase a-z
 *Return: Always 0 (Success)
 */

int main(void)
{
	char capital = 'a';

	while (capital <= 'z')
	{
		putchar(capital);
		capital++;
	}
	putchar('\n');

	return (0);
}


