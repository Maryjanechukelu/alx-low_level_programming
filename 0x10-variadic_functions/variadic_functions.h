#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

/**
 * struct_pointer - A new struct type defining a pointer.
 * @symbol: A symbol representing a data type.
 * @print: A function pointer to a function that prints.
 * a data type corresponding to symbol.
 */
typedef struct pointer
{
	char *symbol;
	void (*print)(va_list arg);

} printer_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
