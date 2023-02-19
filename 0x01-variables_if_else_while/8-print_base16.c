#include <stdio.h>

/**
* main - All code will be in the main function
*
*Return: Always 0
*/
int main(void)
{
	char i;
	char j;

	for (i = 1 ; i < 10 ; i++)
		putchar(i + '0');
	for (j = 'a' ; j <= 'f' ; j++)
		putchar(j);
	putchar('\n');
	return (0);
}
