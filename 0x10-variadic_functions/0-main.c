#include <stdio.h>
#include "variadic_functions.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int sum;

	sum = sum_them_all(2, 98, 1024);
	printf("%d\n", sum);
	sum = sum_them_all(4, 98, 1024, 402, -1024);
	printf("%d\n", sum);

	return (0);
}

