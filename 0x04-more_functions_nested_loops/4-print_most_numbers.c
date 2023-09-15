#include "main.h"

/**
 * print_most_numbers - Prints the numbers 0 - 9.
 * doesn't print the number 2 and 4
 *
 * Return: 0 (Always successful)
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar('0' + i);
		}
	}

	_putchar('\n');
}
