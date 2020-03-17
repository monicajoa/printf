#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>
/**
 * struct format_func - Struct with format with its respective function
 *
 * @ft: The format
 * @func: The function associated
 */
typedef struct format_func
{
	char *ft;
	void (*func)();
} format_func;

int _putchar(char c);
int _printf(const char *format, ...);
void p_char(va_list);
void p_str(va_list);

#endif /* HOLBERTON_H */