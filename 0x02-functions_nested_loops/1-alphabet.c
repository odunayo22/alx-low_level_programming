#include "main.h"

/**
 *function that prints the alphabet, in lowercase, followed by a new line
 *Return: ON success 1
 */
void print_alphabet(void)
{
	char m;

	for (m = 'a'; m <= 'z'; m++)
	{	
		_putchar(m);

		_putchar('\n');	
	}
}
