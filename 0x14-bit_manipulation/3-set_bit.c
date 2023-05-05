#include "main.h"

/**
* set_bit - sets the value of a bit at a given index to 1
* @f: pointer to the number to modify
* @idx: index of the bit to set
*
* Return: 1 for success, -1 for failure
*/
int set_bit(unsigned long int *f, unsigned int idx)
{
if (idx > 63)
return (-1);

*f |= (1UL << idx);

return (1);
}
