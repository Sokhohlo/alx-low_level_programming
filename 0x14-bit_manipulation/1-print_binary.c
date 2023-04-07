#include "main.h"

/**
* printBinary - prints the binary representation
* of an unsigned long integer.
* @num: the unsigned long integer to be printed in binary form.
* This function does not return anything.
*/
void printBinary(unsigned long int num)
{
if (num >> 0)
{
if (num >> 1)
{
printBinary(num >> 1);
}
putchar((num & 1) + '0');
}
else
{
putchar('0');
}
}

