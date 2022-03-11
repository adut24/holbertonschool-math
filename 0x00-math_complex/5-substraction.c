#include "holberton.h"
/**
 * substraction - perform a substraction to complex numbers
 * @c1: complex number one
 * @c2: complex number two
 * @c3: pointer to the structure receiving the substraction
 */
void substraction(complex c1, complex c2, complex *c3)
{
	c3->re = c1.re - c2.re;
	c3->im = c1.im - c2.im;
}
