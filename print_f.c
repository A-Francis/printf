#include "main.h"
/**
 * _printf - Custom implementation of printf
 * @format: The format string with optional conversion specifiers
 * @...: Variable number of arguments to be formatted and printed
 * This function prints formatted output to the standard output stream.The
 * format string can contain zero or more conversion specifiers
 * The function handles these conversion specifiers and writes
 * characters or strings to the standard output.
 * @format: The format string to be processed
 * @...: Additional arguments for the format specifiers
 * Return: The number of characters printed
 *         output to strings)
 */
int _printf(const char *format, ...)
{	va_list args;

	int charCount = 0;

	va_start(args, format);

	while (*format)
	{
	if (*format != '%')
	{
	write(1, format, 1);
	charCount++; }
	else
	{	format++; /* Move past '%'*/
	if (*format == '\0')
		break;

	if (*format == '%')
	{	write(1, format, 1);
		charCount++; }
	else if (*format == 'c')
	{	char c = va_arg(args, int);

		write(1, &c, 1);
		charCount++; }
	else if (*format == 's')
	{	char *str = va_arg(args, char*);
		int str_len = 0;

		while (str[str_len] != '\0')
		str_len++;
		write(1, str, str_len);
		charCount += str_len; }
	format++; }
va_end(args);
return (charCount);
}
