#include "main.h"
/**
 * _printf - Custom implementation of printf
 * @format: The format string with optional conversion specifiers
 * @...: Variable number of arguments to be formatted and printed
 *
 * This function prints formatted output to the standard output stream. The
 * format string can contain zero or more conversion specifiers
 * The function handles these conversion specifiers and writes
 * characters or strings to the standard output.
 *
 * @format: The format string to be processed
 * @...: Additional arguments for the format specifiers
 * Return: The number of characters printed
 *         output to strings)
 */
int _printf(const char *format, ...)
{
	va_list args;

	va_start(args, format);
	int charCount = 0;

	while (*fomat)
	{
	if (*format != '%') /*if format is not % sign*/
	{
		write(1, format, 1);/*write to standard output*/
		charCount++; }
	else /*if format is the sign%*/
	{
		format++; /*skip % check next character*/
		if (*format == '\0')
			break;
		if (*format == '%')/*this solves %*/
		{
			write(1, format, 1);
			charCount++; }
		else if (*format == 'c')
		{/*handles the c*/
			char c = va_args(args, int)

			write(1, &c, 1);
			charCount++; }
		else if (*format == 's')
		{
			char *str = va_args(args, char*);
			int str_len = 0;

			while (str(str_len) != '\0')
				str_len++;
			write(1, str, str_len);
			charCount += str_len;
		}}
format++ }
va_end(args);
return (charCount);
}
