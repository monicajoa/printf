#include "holberton.h"
/**
 * _get_format - sent to the function that represent the character
 * @fmt: character that represents the format
 * @ls_pa: List of paramethers
 *
 * Return: void
 */
void _get_format(char *fmt, va_list ls_pa)
{
	format_func arr_fm[] = {
		{"c", p_char},
		{"s", p_str},
		{NULL, NULL}
	};
	int x;

	for (x = 0; arr_fm[x].ft[0] != '\0'; x++)
	{
		if (arr_fm[x].ft[0] == fmt[0])
		{
			arr_fm[x].func(ls_pa);
		}
	}
}
