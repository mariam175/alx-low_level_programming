#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 *set_bit- ...
 *@n: ....
 *@index:...
 *Return:1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
		return (-1);
	return ((*n |= 1 << index) ? 1 : -1);
}
