#include "main.h"
#include <stdio.h>

/**
 * swap_int - function to swap values of two integers
 * @a : pointer a to swap values
 * @b : pointer b to swap values of integers
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
    int a;
    int b;

    a = 98;
    b = 42;
    printf("a=%d, b=%d\n", a, b);
    swap_int(&a, &b);
    printf("a=%d, b=%d\n", a, b);
    return (0);
}
