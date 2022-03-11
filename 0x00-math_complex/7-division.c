#include "holberton.h"
/**
 * division - perform a division to complex numbers
 * @c1: complex number one
 * @c2: complex number two
 * @c3: pointer to the structure receiving the division
 */
void division(complex c1, complex c2, complex *c3)
{
	c3->re = (c1.re * c2.re + c1.im * c2.im) / (c2.re * c2.re + c2.im * c2.im);
	c3->im = (c1.im * c2.re - c1.re * c2.im) / (c2.re * c2.re + c2.im * c2.im);
}
