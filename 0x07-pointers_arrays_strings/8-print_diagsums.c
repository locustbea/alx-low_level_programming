#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print sum of two diagonals
 * @a: first input
 * @size: second input
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int s1, s2, y;

	s1 = 0;
	s2 = 0;

	for (y = 0; y < size; y++)
	{
		s1 = s1 + a[y * size + y];
	}
	for (y = size - 1; y >= 0; y--)
	{
		sum2 += a[y * size + (size - y - 1)];
	}
	printf("%d, %\n", sum1, sum2);
}