#include <stdio.h>

/**
 * main - Entry point
 * author: steven
 * Return: Always 0 (Success)
 */
int main(void)
{
	int steven;
	char kingx;

	for (steven = 48; steven < 58; steven++)
		putchar(steven);
	for (kingx = 'a'; kingx <= 'f'; kingx++)
		putchar(kingx);
	putchar('\n');
	return (0);
}
