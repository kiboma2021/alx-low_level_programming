#include "main.h"

/**
 * print_last_digit - prints & returns the last digit of a number
 * @x: number to be checked
 *
 * Return: return the last value of a number
 */

int print_last_digit(int n)
{
	int nv;

	if (n < 0)
		nv = -1 * (n % 10);
	else
		nv = n % 10;

	_putchar(nv + '0');
	return (nv);
}
