#include <stdio.h>
/**
 * main -prints all the numbers of base 16 in lowercase
 * Return: (0)
 */
int main(void)
{
	char d = 'a';
	int num;

	for (num = 0; num < 16; num++)
	{
		if (num < 10)
			putchar(num + '0');
		} else
		{
			putchar(d);
			d++;
		}
	}
	putchar('\n');
	return (0);
}
