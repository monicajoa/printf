#include "holberton.h"
/**
 *p_char - function that print a character
 *@arg: list of parameters
 *
 * Return: int with the number of characters printed
 */
int p_char(va_list arg)
{
	_putchar(va_arg(arg, int));
	return (1);
}

/**
 *p_str - function that print a string
 *@arg: list of parameters
 *
 * Return: number of characters printed
 */
int p_str(va_list arg)
{
	char *str;
	char *nilstr;
	int i, j;

	str = va_arg(arg, char *);
	if (str == '\0')
	{
		nilstr = "(null)";
		for (j = 0; nilstr[j] != '\0'; j++)
		{
			_putchar(nilstr[j]);
		}
		return (j);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	return (i);
}
/**
 *p_int - function that print a integer or digit
 *@arg: list of paramethers
 *
 * Return: number of characters printed
 */
int p_int(va_list arg)
{
	int a, i, temp;
	int factor = 1;

	a = va_arg(arg, int);
	temp = a;
	i = 0;
	while (temp)
	{
		temp = temp / 10;
		factor = factor * 10;
	}
	while (factor > 1)
	{
		factor = factor / 10;
		_putchar((a/factor) + '0');
		a = a % factor;
		i++;
	}
	return (i);
}
