#include <stdio.h>

/**
* main - All code will be in the main function
*
*Return: Always 0
*/
int main(void)
{
	char i;

	for (i = 0 ; i < 10 ; i++)
	{
		putchar(i + '0');
		putchar(',');
		putchar(' ');
	}
	return (0);
}
