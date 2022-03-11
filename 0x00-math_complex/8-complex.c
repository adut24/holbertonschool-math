#include "holberton.h"
#include <math.h>
/**
 * complex_from_mod_arg - update real and imaginary part of a complex number
 * @m: modulus
 * @arg: argument
 * @c3: pointer to the structure of the updated complex number
 */
void complex_from_mod_arg(double m, double arg, complex *c3)
{
	c3->re = m * cos(arg);
	c3->im = m * sin(arg);
}
