#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of a number
 * ld: number's last digit result
 * Return: value of the last digit
 */
int print_last_digit(int ld)
{
	int prld;

	prld = (ld % 10);

	if (prld < 0)
	{
		prld = (-1 * prld);
	}

	_putchar(prld + '0');
	return (prld);
}
