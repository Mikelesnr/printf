#include "main.h"

/**
 * _printf - Produces output according to a format
 * @format: Is a character string.
 * Return: The number of characters printed (excluding
 * the null byte used to end output to strings)
 **/
int _printf(const char *format, ...)
{
	int size;
	va_list args;

	if (format == NULL)
		return (-1);

	size = _strlen(format);
	if (size <= 0)
		return (0);

	va_start(args, format);
	size = 1


	va_end(args);

	return (size);
}
