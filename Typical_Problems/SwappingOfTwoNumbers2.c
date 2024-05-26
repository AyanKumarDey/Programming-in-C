//Swapping of two numbers using XOR Operator.
#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter the first number:-\n");
    scanf("%d",&a);
    printf("Enter the second number:-\n");
    scanf("%d",&b);
    printf("The numbers before swapping a = %d & b = %d\n",a,b);
    a = a^b;
    b = a^b;
    a = a^b;
    printf("The numbers after swapping a = %d & b = %d\n",a,b);
    return 0;
}