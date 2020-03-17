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
	char *c;
	int i;

	c = va_arg(arg, char *);
	for (i = 0; c[i] != '\0'; i++)
	{
		_putchar(c[i]);
	}
}
