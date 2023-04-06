#include "main.h"

/**                                                        * convert_binary_to_uint - function to convert a binary number to an
* unsigned integer.
* @binary_string: binary string to be converted.
*                                                          * Return: unsigned integer.
*/

unsigned int convert_binary_to_uint(const char *binary_string)
{                                                              unsigned int uint_value;
int string_length, base_two;
if (!binary_string)
return (0);

uint_value = 0;
for (string_length = 0; binary_string[string_length] != ''; string_length++)
;

for (string_length--, base_two = 1; string_length >= 0; string_length--, base_two *= 2)
{
if (binary_string[string_length] != '0' && binary_string[string_length] != '1')
{
return (0);
}

if (binary_string[string_length] & 1)
{
uint_value += base_two;
}
}

return (uint_value);
}

