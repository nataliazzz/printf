#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * _printf - function printf
 * @format: string format to print
 *
 * Return: number of characters to print
 */
int _printf(const char *format, ...)
{
	va_list args;
	int length = 0;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	length = _print_format(format, args);
	va_end(args);
	return (length);
}
