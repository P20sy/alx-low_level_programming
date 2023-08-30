#include "main.h"

/**
 * _puts_recursion - Prints a string followed by a new line using recursion
 *
 * @s: the input to string
 *
 * Return: void, returns nothing
 */

void _puts_recursion(char *s)
{
	if (!s || *s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s++);

	_puts_recursion(s);
}
