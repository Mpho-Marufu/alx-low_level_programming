#include "main.h"

/**
 * more_numbers - print numbers till 14
 *
 *
 * Return: values
 */

void more_numbers(void)
{
	char c;
	int i;

	for (i = 0; i <= 10; i++)
		for (c = '0'; c <= '14'; c++)
			_putchar(c);

		_putchar('\n');

	_putchar('\n');
}
