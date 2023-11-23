#ifndef _BIT_MANIP_
#define _BIT_MANIP_

int _strlen(const char *str);
unsigned int binary_to_uint(const char *bin);
unsigned int flip_bits(unsigned long int num, unsigned long int w);
int _putchar(char c);
int get_bit(unsigned long int num, unsigned int index);
void print_binary(unsigned long int num);

int clear_bit(unsigned long int *num, unsigned int index);
int set_bit(unsigned long int *num, unsigned int index);
int get_endianness(void);
void _divide(unsigned long int num);
#endif
