#include "main.h"

/**
 * set_string - sets the value of a pointer to a character.
 * @s: pointer to set.
 * @to: string to change pointer to.
 *
 */
void set_string(char **s, char *to)
{
	*s = to;
}
