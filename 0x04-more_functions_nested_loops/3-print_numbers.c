#include "main.h"

/**
 * print_numbers - Prints the numbers 0 - 9.
 *
 * Return: 0 (Always successful)
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0' + i);
	}

	_putchar('\n');
}

