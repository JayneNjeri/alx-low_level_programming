#include <stdio.h>
#include "3-function_like_macro.h"

/**
 * main - finds absolute value
 *
 * Return: Always 0 when correct.
 */
int main(void)
{
	int j;
	int m;

	j = ABS(-98) * 10;
	m = ABS(98) * 10;
	printf("%d, %d\n", j, m);
	return (0);
}
