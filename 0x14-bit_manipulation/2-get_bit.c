#include "main.h"

/**
* get_bit - returns the value of a bit at a given index
* @f: number to search
* @idx: index of the bit to retrieve
*
* Return: the value of the bit at index idx, or -1 if an error occurs
*/
int get_bit(unsigned long int f, unsigned int idx)
{
int bit_val;

if (idx > 63)
return (-1);

bit_val = (f >> idx) & 1;

return (bit_val);
}

