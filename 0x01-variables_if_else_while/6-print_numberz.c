#include <stdio.h>
/**
 * main - main function
 * Description: prints all single digti numbers of base 10
 * starting from zero, followed by a new line.
 * Return: 0
 */
int main(void)
{
	int c = 0;

	while (c < 10)
	{
		putchar(48 + c);
		c++;
	}

	putchar('\n');
	return (0);
}
