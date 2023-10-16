#include "main.h"

/**
 * print_char - Entry point
 * @opaq : arguments
 *
 * Return: 1 for success
 */
int print_char(va_list opaq)
{
	char c;

	c = va_arg(val, int); /* extract argument from va_list */
	_putchar(c); /* print the character */
	return (1);
}

/**
 * print_string - Entry point
 * @opaq : the argumets in va_list
 *
 * Return: the length of the strings
 */
int print_string(va_list opaq)
{
	char *s; /*intentions to store string */
	int x; /* int for loop counting*/
	int l; /*storing the length of the string*/

	str = va_arg(opaq, char*); /*extracton from va_list*/
	if (s == NULL) /*checking if string is null*/
	{
		s = "(null)"; /* if yes then setting s to null*/
		l = _strlen(s); /*calculate the length*/
		for (x = 0; x < l; x++) /*looping through the characters*/
			_putchar(s[x]);
		return (l);
	}
	else
	{
		l = _strlen(s);
		for (x = 0; x < l; x++)
			_putchar(s[x]);
		return (l);
	}
}

/**
 * print_percent - Entry point
 *
 * Return: 0 always for succes
 */
int print_percent(void)
{
	_putchar(37); /* 37 is equals to percentage in ascii code*/
	return (0);
}
/**
 * _strlen - Entry point
 * @s: the given parameter
 * Return:the length of the given parameter
 */
int _strlen(char *s)
{
	int x;

	x = 0;
	while (s[x] != '\0')
	{
		x++;
	}
	return (x);
}~
