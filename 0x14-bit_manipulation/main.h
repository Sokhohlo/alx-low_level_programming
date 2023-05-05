#ifndef MAIN_H
#define MAIN_H

unsigned int binary_to_uint(const char *f);
void print_binary(unsigned long int f);
int get_bit(unsigned long int f, unsigned int idx);
int set_bit(unsigned long int *f, unsigned int idx);
int clear_bit(unsigned long int *f, unsigned int idx);
unsigned int flip_bits(unsigned long int f, unsigned long int j);
int _atoi(const char *e);
int _putchar(char d);
int get_endianness(void);

#endif

