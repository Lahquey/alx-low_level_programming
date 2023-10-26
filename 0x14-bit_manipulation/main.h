#ifndef CUSTOM_MAIN_H
#define CUSTOM_MAIN_H

unsigned int custom_binary_to_uint(const char *binary_str);
void custom_print_binary(unsigned long int num);
int custom_get_bit(unsigned long int num, unsigned int index);
int custom_set_bit(unsigned long int *num, unsigned int index);
int custom_clear_bit(unsigned long int *num, unsigned int index);
unsigned int custom_flip_bits(unsigned long int num1, unsigned long int num2);
int custom_atoi(const char *str);
int custom_putchar(char ch);
int custom_get_endianness(void);

#endif  /* CUSTOM_MAIN_H */
