#include <stdio.h>
/**
 * main - Write a program that prints the alphabet in lowercase, and then in uppercase, followed by a new line.
 * Return: (0)
 */
int main(void)
{
	char b;
	for (b = 'a'; b <= 'z'; b++)
		putchar(b);
	for (b = 'A'; b <= 'Z'; b++)
		putchar(b);
	putchar('\n');
	return (0);
}
