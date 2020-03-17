#include "holberton.h"
/**
 * _printf -  produces output according to a format
 * @format: String to print including the format 
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list p_l;
	int i;

	va_start(p_l, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			_get_format(format[i + 1], p_l);
		}
		else
		{
			_putchar(format[i]);
		}
	}
	return (i);
}
