#include "main.h"

/**
 * _printf - writes to standard output.
 * @format: a string
 * Return: n_characters
 */
int _printf(const char *format, ...)
{
	int i, j, n_characters;
	char *str;
	i = 0;
	n_characters = 0;

	va_list a;

	va_start(a, format);
	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			n_characters += 1;
		}
		else 
		{
			if (format[i + 1] == 'c')
			{
				_putchar(va_arg(a, int));
				n_characters += 1;
				i++;
			}
		
			else if (format[i + 1] == 's')
			{
				i++;
				str = (va_arg(a, char *));
				j = 0;
				while (str[j] != '\0')
				{
					_putchar(str[j]);
					n_characters += 1;
					j++;
				}
			}
		}
		i++;
	}
	va_end(a);

	return(n_characters);
}
