#include "main.h"

/**
 * _printf - writes to standard output.
 * @format: a string
 * Return: on 0, success 
 */
int _printf(const char *format, ...)
{
	int i, n_characters;
	i = 0;
	n_characters = 0;

	while (format[i] != '\0')
	{
		_putchar(format[i]);
		i++;
	}
	
	return(0);
}
