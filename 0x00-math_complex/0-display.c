#include "holberton.h"
#include <stdio.h>
/**
 * display_complex_number - display a complex number
 * @c: structure to display
 */
void display_complex_number(complex c)
{
	printf("%.9g", c.re);
	if (c.im == 1)
		printf(" + i");
	else if (c.im == -1)
		printf(" - i");
	else if (c.im > 0 && c.im != 1)
		printf(" + %.9gi", c.im);
	else if (c.im < 0 && c.im != -1)
		printf(" - %.9gi", -c.im);
	printf("\n");
}
