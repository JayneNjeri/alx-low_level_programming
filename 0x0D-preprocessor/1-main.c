#include "1-pi.h"
#include <stdio.h>

/**
 * main - in this case Calculates the area of a circle
 *
 * Return: returns 0 when correct.
 */
int main(void)
{
	float a;
	float radius;

	radius = 98;
	a = PI * radius * radius;
	printf("%.3f\n", a);
	return (0);
}
