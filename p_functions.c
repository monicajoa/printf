#include "holberton.h"
/**
 *p_char - function that print a character
 *@arg: list of parameters
 *
 * Return: Always 0 (Success)
 */
void p_char(va_list arg)
{
	_putchar(va_arg(arg, int));
}

/**
 *p_str - function that print a string
 *@arg: list of parameters
 *
 * Return: Always 0 (Success)
 */
void p_str(va_list arg)
{
	char *str;
	int i;

	str = va_arg(arg, char *);
	if (str == '\0')
	{
		_putchar('n');
		return;
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
}
