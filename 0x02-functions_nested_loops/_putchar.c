#include "main.h"
#include <unistd.h>

/**Write a program that prints _putchar, followed by a new line.
 * c stands out
 *
 * Return: success 1
 */
int _putchar(char c)
{
	return(write(1, $c, 1));
}

