#include "main.h"

/**
 * swap_int - function to swap values of two integers
 * @a : pointer a to swap values
 * @b : pointer b to swap values of integers
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
int c = *b;
int d = *a;
*a = c;
*b = d;
}
