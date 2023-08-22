#include <stdio.h>
#include "main.h"
/**
 * main - Entry point of the program
 *
 * This function serves as the entry point of the program. It demonstrates the
 * usage of both the custom _printf function and the standard printf function
 * by calling them with format strings and various arguments.The _printf
 * function showcases its implementation of formatted output
 *printf function demonstrates the built-in functionality.It returns
 * 0 to indicate successful execution.
 * Return: 0 upon successful completion
 */
int main(void)
{
	_printf("Hello, %s! The character is %c and here's a %%.\n", "world", 'A');
	return (0);
}
