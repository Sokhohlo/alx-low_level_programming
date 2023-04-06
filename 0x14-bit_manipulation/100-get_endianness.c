#include "header.h"                                                                                                   /**
* check_endianness - checks the endianness of the system
*                                                          * Return: 0 if big endian, 1 if little endian              */
int check_endianness(void)
{                                                              unsigned int num;                                          char *c_ptr;                                                                                                          num = 1;
c_ptr = (char *) &num;
return ((int)*c_ptr);
}
