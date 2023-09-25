#include "main.h"
/**
 * set_string - seting the value of a pointer to a char
 * @s: pointer to pointer
 * @to: pointer to char
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
