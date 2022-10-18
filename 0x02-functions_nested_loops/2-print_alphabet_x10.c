#include "main.h"

/**
 *function that prints 10 times the alphabet, in lowercase, followed by a new line
 */

void print_alphabet_x10(void)
{
	int counter = 0;
	char letter;

	while (counter++ <=9)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
	}
}
