#include "variadic_functions.h"


/**
 * print_char - print a character
 * @args: the va_list with the character to print as it's next element
 *
 * Return: the number of bytes printed
 */
int print_char(va_list args)
{
	return (printf("%c", va_arg(args, int)));
}


/**
 * print_float - print a float
 * @args: the va_list with the float to print as it's next element
 *
 * Return: the number of bytes printed
 */
int print_float(va_list args)
{
	return (printf("%f", va_arg(args, double)));
}
