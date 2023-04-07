#include "main.h"

/**
* set_bit_to_zero - function to set a bit to zero at a given index
*
* @num_ptr: pointer to an unsigned long integer.
* @index: index of the bit to be set to zero.
*
* Return: 1 if the bit was successfully set to zero, or -1 if an error occurred.
*/
int set_bit_to_zero(unsigned long int *num_ptr, unsigned int index)
{
unsigned int mask;

if (index > 63)
return (-1);

mask = 1 << index;

if (*num_ptr & mask)
*num_ptr ^= mask;

return (1);
}

