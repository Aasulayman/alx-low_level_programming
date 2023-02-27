#include "main.h"

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
printf("Enter value of a: ");
scanf("%d", &a);
printf("Enter value of b : ");
scanf("%d", &b);
printf("Before swapping : a is : %d, b is : %d\n", a, b);
swap(&a, &b);
printf("After swapping : a is : %d, b is : %d\n", a, b);
return (0);
}
