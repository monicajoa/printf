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
void _get_format(char *fmt, va_list ls_pa);

#endif /* HOLBERTON_H */
