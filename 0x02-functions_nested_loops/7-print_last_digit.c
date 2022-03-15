#include "main.h"

/**
 * print_last_digit - prints & returns the last digit of a number
 * @x: number to be checked
 *
 * Return: return the last value of a number
 */
int print_last_digit(int num)
{
	int last_num = abs(num % 10);

	_putchar('0' + last_num);
	return (last_num);
}
