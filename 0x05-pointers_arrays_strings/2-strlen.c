#include "main.h"

/**
 *  _strlen - funtion that returns the length of a sting
 *  @s: a string
 *  Return : an interger
 */

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
	{
		len++;
	}
	return (len);
}
