#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - main function
 * Description: prints all single digits numbers of base 10
 * starting from zero, followed by a new line.
 * Return: 0
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}

	putchar('\n');
	return (0);

}
