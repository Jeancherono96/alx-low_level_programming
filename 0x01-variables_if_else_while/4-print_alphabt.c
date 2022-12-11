#include <stdio.h>
/**
 * main -  prints the alphabet in lowercase except q and e
 * Return: (0)
 */
int main(void)
{
	char b;

	for (b = 'a'; b <= 'z'; b++)
	{
		if (b != 'e' && b != 'q')
			putchar(b);
	}
	putchar('\n');
	return (0);
}
