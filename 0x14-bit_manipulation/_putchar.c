#include "main.h"
#include <unistd.h>
/**
 * _putchar- writes the chracter c to stdout
 * @c: the charcter to print
 *
 * return: On success 1
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
