#include "main.h"

/**
* binary_to_uint - converts a binary number to an unsigned int
* @f: string that contains the binary number
*
* Return: the number that is converted, or 0 if f is NULL or contains
*         a character that is not '0' or '1'
*/
unsigned int binary_to_uint(const char *f)
{
int k;
unsigned int dec_val = 0;

if (!f)
return (0);

for (k = 0; f[k]; k++)
{
if (f[k] < '0' || f[k] > '1')
return (0);
dec_val = 2 * dec_val + (f[k] - '0');
}

return (dec_val);
}

