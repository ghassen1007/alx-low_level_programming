#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number
 * @gass: number's last digit result
 * Return: value of the last digit
 */
int print_last_digit(int gass)
{
	int a;

	a = (gass % 10);

	if (a < 0)
	{
		a = (-1 * a);
	}

	_putchar(a + '0');
	return (a);
}
