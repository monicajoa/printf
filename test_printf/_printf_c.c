#include "holberton.h"
/**
 * _printf - Produces output according to a format
 * @format: String to print including the format 
 *
 * Return: number of characters printed
 */
int _printf(char *format, ...)
{
	format_func ar_fm[] = {
		{"c", p_char},
		{"s", p_str},
		{'\0', '\0'}
	};
	va_list p_l;
	int i, j;
	char *p;

	va_start(p_l, format);
	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			j = 0;
			while (ar_fm[j].ft != '\0')
			{
				if (ar_fm[j].ft[0] == format[i + 1])
				{
					ar_fm[j].func(p_l);
					i++;
				}
				j++;
			}
		}
		else
		{
			_putchar(format[i]);
		}
		i++;
	}
	return (i);
}
