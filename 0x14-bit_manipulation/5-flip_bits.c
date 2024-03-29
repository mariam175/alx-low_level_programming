#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 *flip_bits- ...
 *@n: ....
 *@m:...
 *Return:number of bits needs to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int c = 0, xr = n ^ m;

	while (xr)
	{
		c += xr & 1;
		xr >>= 1;
	}
	return (c);
}
