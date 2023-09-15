#include "main.h"
/**
* print_line - uses the character _ to form a line.
* @n: The number of times underscore is printed
*/
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n > 0)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
