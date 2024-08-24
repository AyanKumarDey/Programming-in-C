#include <stdio.h>
void swap(int *,int *);

void main()
{
    int a,b;
    printf("Enter the two numbers:-\n");
    scanf("%d %d",&a,&b);
    printf("Before swap a = %d & b = %d\n",a,b);
    swap(&a,&b);
    printf("After swap a = %d & b = %d",a,b);
}

void swap(int *x,int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}