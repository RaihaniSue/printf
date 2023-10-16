#include "main.h"

/**
 * print_from_to - entry point
 * @start: starting add
 * @stop: stopping add
 * @except: excepting add
 *
 * Return: numb of bytes printed
 */
int print_from_to(char *start, char *stop, char *except)
{
	int sum = 0;

	while (start <= stop)
	{
		if (start != except)
			sum += _putchar(*start);
		start++;
	}
	return (sum);
}

/**
 * print_rev - entry point
 * @ap: string
 * @params: the paramketers struct
 *
 * Return: number bytes printed
 */
int print_rev(va_list ap, params_t *params)
{
	int len, sum = 0;
	char *str = va_arg(ap, char *);
	(void)params;

	if (str)
	{
		for (len = 0; *str; str++)
			len++;
		str--;
		for (; len > 0; len--, str--)
			sum += _putchar(*str);
	}
	return (sum);
}

/**
 * print_rot13 - entry entry
 * @ap: string
 * @params: the parameters struct
 *
 * Return: number bytes printed
 */
int print_rot13(va_list ap, params_t *params)
{
	char *str = va_arg(ap, char *);
	char *rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	int idx, count = 0;
	char *encoded = NULL;

	(void)params;

	encoded = malloc(sizeof(char) * (_strlen(str) + 1));

	if (!encoded || !str)
		return (-1);

	for (count = 0; str[count]; count++)
	{
		for (idx = 0; idx < 52; idx++)
		{
			if (str[count] == alphabet[idx])
			{
				encoded[count] = rot13[idx];
				break;
			}
		}
/* Insert characters that do not get rot13'd -- punctuation and numbers */
		if (str[count] != alphabet[idx])
			encoded[count] = str[count];
	}

	for (count = 0; encoded[count]; count++)
		_putchar(encoded[count]);

	free(encoded);

	return (count);
}
