#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z)
	{
		_putchar(letter);
		letter+++;
	}
	putchar('\n');
	return (0);
}
