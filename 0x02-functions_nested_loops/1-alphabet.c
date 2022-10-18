#include <stdio.h>
#include <time.h>

/**
 *main - function that prints the alphabet, in lowercase, followed by a new line
 *Return: Nothing
 */
void print_alphabet(void)
{
	char m;

	for (m = 'a'; m <= 'z'; m++)
	{
		putchar(m);
	}
	putchar('\n');	
}
