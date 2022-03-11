#include "holberton.h"
#include <math.h>
/**
 * argument - calculate the argument of a given complex number
 * @c: the structure of the complex number
 * Return: argument of the structure c
 */
double argument(complex c)
{
	double arg;

	if (c.re < 0)
	{
		if (c.im > 0)
			arg = M_PI - atan(c.im / -c.re);
		else
			arg = -(M_PI - atan(-c.im / -c.re));
	}
	else
		arg = atan(c.im / c.re);
	return (arg);
}
