# 0x00-math_complex

## [0-display.c](./0-display.c)
Build the structure “complex” where a complex number a + ib is represented by two doubles.

Write a function that displays the complex numbers, followed by a new line.
- Prototype: `void display_complex_number(complex c);`
- You can use `printf` in your code

## [1-conjugate.c](./1-conjugate.c)
Write a function that returns the conjugate of a given complex number.
- Prototype: `complex conjugate(complex c);`

## [2-modulus.c](./2-modulus.c)
Write a function that returns the modulus of a given complex number.
- Prototype: `double modulus(complex c);`
- You can use the library `<math.h>` in your code

## [3-argument.c](./3-argument.c)
Write a function that returns the argument of a given complex number.
- Prototype: `double argument(complex c);`
- You can use the library `<math.h>` in your code

## [4-addition.c](./4-addition.c)
Write a function that performs the addition operation to complex numbers.
- Prototype: `void addition(complex c1, complex c2, complex *c3);`

## [5-substraction.c](./5-substraction.c)
Write a function that performs the substraction operation to complex numbers.
- Prototype: `void substraction(complex c1, complex c2, complex *c3);`

## [6-multiplication.c](./6-multiplication.c)
Write a function that performs the multiplication operation to complex numbers.
- Prototype: `void multiplication(complex c1, complex c2, complex *c3);`

## [7-division.c](./7-division.c)
Write a function that performs the division operation to complex numbers.
- Prototype: `void division(complex c1, complex c2, complex *c3);`

## [8-complex.c](./8-complex.c)
Write a function that update the real and the imaginary parts of a complex number given its modulus and arguments.
- Prototype: `void complex_from_mod_arg (double m, double arg, complex *c3);`
- You can use the library `<math.h>` in your code
