#include <stdio.h>
void swap(int *x, int *y)
{
int temp;
temp = *x;
*x = *y;
*y = temp;
}
int main()
{
int a, b;
printf("Enter a and b values: ");
scanf("%d %d", &a, &b);
printf("Before swap, a = %d and b = %d\n", a, b);
swap(&a, &b);
printf("After swap, a = %d and b = %d\n", a, b);
return 0;
}
