#include "header.h"

// Code to clear a bit at a given index in an unsigned long integer
/**
* set_bit_to_zero - function to set a bit to zero at a given index
* in an unsigned long integer.
*                                                          * @num_ptr: pointer to an unsigned long integer.
* @index: index of the bit to be set to zero.
*                                                          * Returns: 1 if it succeeds, -1 if it fails.
*/
int set_bit_to_zero(unsigned long int *num_ptr, unsigned int index)
{
unsigned int mask;

if (index > 63)
return (-1);

mask = 1 << index;

if (*num_ptr & mask)                                           *num_ptr ^= mask;

return (1);
}

