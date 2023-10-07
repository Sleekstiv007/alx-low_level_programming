#include <stdio.h>

/**
 * main - Entry point
 * author:steven
 * Return: Always 0 (Success)
 */
int main(void)
{
	int steven;

	for (steven = 48; steven < 58; steven++)
	{
		putchar(steven);
		if (steven != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
