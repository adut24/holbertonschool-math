#include "holberton.h"
/**
 * conjugate - return the conjugate number of a given complex number
 * @c: structure of the complex number
 * Return: structure of the conjugate number
 */
complex conjugate(complex c)
{
	complex a;

	a.re = c.re;
	a.im = -c.im;
	return (a);
}
