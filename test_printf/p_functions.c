#include "holberton.h"
/**
 *p_char - function that print a character
 *@arg: list of parameters
 *
 * Return: Always 0 (Success)
 */
void p_char(va_list arg)
{
	char *c;

	c = va_arg(arg, char *);
	_putchar(c[0]);
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
	int a;

	c = va_arg(arg, char *);
	for (a = 0; c[a] != '\0'; a++)
	{
		_putchar(c[a]);
	}
}	          
