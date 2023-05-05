#include "main.h"

/**
* clear_bit - sets the value of a bit at a given index to 0
* @f: pointer to the number to modify
* @idx: index of the bit to clear
*
* Return: 1 for success, -1 for failure
*/
int clear_bit(unsigned long int *f, unsigned int idx)
{
if (idx > 63)
return (-1);

*f &= ~(1UL << idx);

return (1);

