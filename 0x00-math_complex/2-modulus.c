#include "holberton.h"
#include <math.h>
/**
 * modulus - calculate the modulus of a given complex number
 * @c: structure of the given complex number
 * Return: modulus of c
 */
double modulus(complex c)
{
	double mod;

	mod = sqrt((c.re * c.re) + (c.im * c.im));
	return (mod);
}
