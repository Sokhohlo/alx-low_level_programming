#include "main.h"

/**
* getBit - returns the value of the bit at the specified
* index of an unsigned long integer.
* @num: the unsigned long integer.
* @index: the index of the bit.
* Return: the value of the bit at the index, or -1 if index is
* out of range for an unsigned long integer.
*/

int getBit(unsigned long int num, unsigned int index)
{
unsigned int i;

if (num == 0 && index < 64)
{
return (0);
}

for (i = 0; i <= 63; num >>= 1, i++)
{
if (index == i)
{
return (num & 1);
}
}

return (-1);
}

