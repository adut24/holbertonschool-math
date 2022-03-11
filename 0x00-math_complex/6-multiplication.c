#include "holberton.h"
/**
 * multiplication - perform a multiplication to complex numbers
 * @c1: complex number one
 * @c2: complex number two
 * @c3: pointer to the structure receiving the multiplication
 */
void multiplication(complex c1, complex c2, complex *c3)
{
	c3->re = c1.re * c2.re - c1.im * c2.im;
	c3->im = c1.re * c2.im + c1.im * c2.re;
}
