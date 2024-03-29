#include "main.h"

/**
 * _puts_recursion - function definition
 * @s: thr string to recurse
 * Description: it recurses through a string s
 * Return:it void
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
	else
	{
		_putchar('\n');
	}
}
