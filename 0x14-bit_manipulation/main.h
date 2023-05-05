#ifndef MAIN_H
#define MAIN_H

unsigned int binary_to_uint(const char *f);
void print_binary(unsigned long int n);
int get_bit(unsigned long int f, unsigned int idx);
int set_bit(unsigned long int *f, unsigned int idx);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int _atoi(const char *e);
int _putchar(char d);
int get_endianness(void);

#endif

