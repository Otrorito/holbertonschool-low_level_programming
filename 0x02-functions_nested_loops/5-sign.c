#include "main.h"

/**
 * print_sign - print the sign's number
 *
 * @n: number in ascci code
 * Return: 1 for number greater than zero, 0 if number is zero, otherwise -1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar (45);
		return (-1);

	}
	else
		_putchar (48);
	return (0);
}
