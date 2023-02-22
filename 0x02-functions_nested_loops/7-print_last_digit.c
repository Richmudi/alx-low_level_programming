#include "main.h"

/**
* print_last_digit - Prints the last digit of a number
*
* @n: case parameter to be printed
* Return: Returns m
*/

int print_last_digit(int n)
{
	int m;

	m = n % 10;
	if (m < 0)
		m = -m;
	return (m);
}
