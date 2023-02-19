#include <stdio.h>

/**
* main - All code will be in the main function
*
*Return: Always 0
*/
int main(void)
{
	char i;

	for (i = 'z' ; i >= 'a' ; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
