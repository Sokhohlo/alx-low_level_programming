#include <stdio.h>

/**

 * bin_to_dec - converts a binary number to a decimal number.

 * @bin: the binary number to convert.

 *

 * Return: the decimal equivalent of the binary number.

 */

int bin_to_dec(const char *bin)

{

        int dec = 0, base = 1, i;

        if (!bin)

                return 0; /* return 0 if the binary number is not valid*/

        for (i = 0; bin[i]; i++)

        {

                if (bin[i] != '0' && bin[i] != '1')

                {

                        return 0; /* return 0 if the binary number is not valid*/

                }

        }

        i--;

        for (; i >= 0; i--, base *= 2)

        {

                if (bin[i] == '1')

                {

                        dec += base;

                }

        }

        return dec;

}

