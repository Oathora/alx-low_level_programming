#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse.
 * followed by a new line
 * Return: Always 0 on success
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
		c--;
	}
	putchar('\n');
	return (0);
}
