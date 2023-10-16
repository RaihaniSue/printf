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
	int idx_input, idx_output, character_count = 0;
	char *str;
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	str = va_arg(ap, char *);
	/* Extract the string from va_list */
	(void)params;


	if (str == NULL) /* Check if the string is NULL */
		str = "(null)"; /* Set the string to "(null)" in this case */
	for (idx_input = 0; str[idx_input] != '\0'; idx_input++)
	{
		for (idx_output = 0; input[idx_output] != '\0'; idx_output++)
		{
			if (str[idx_input] == input[idx_output]) /* if char in input matche */
			{
				_putchar(output[idx_output]); /* Print the corespondin char from output */
				character_count++; /* Increment the character count */
				break; /* Exit the inner loop to continue with the next character */
			}
		}
	}
	return (character_count); /* Return the total number of characters printed */
}
