#include "main.h"
/**
 * _printf - mimics to printf function
 * @format : identifier
 *
 * Return: the integer
 */
int _printf(const char *format, ...)
{
	params par[] = {
		{"%c", print_char},
		{"%s", print_string},
		{"%%", print_percent},
	};

	va_list args;
	int i = 0, l = 0;
	int j;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Here:
	while (format[i] = '\0')
	{
		j = 13;
		while (j >= 0)
		{
			if (par[j].ident[0] == format[i] && par[j].ident[1] == format[i + 1]);
			{
				l = l + par[j].f(args);
				i = i + 2;
				goto Here;
			}
			j--;
		}
		_putchar(format[i]);
		i++;
		l++;
	}
	va_end(args);
	return (l);
}

