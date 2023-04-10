#include "main.h"

/**
* get_endianness - This function checks if a machine it's little or
*a big endian
* Return: Returns 0 for big and 1 for little
*/
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
