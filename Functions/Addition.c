#include <stdio.h>
int add(int,int);

int main()
{
    int a,b;
    printf("Enter the first numbers:-\n");
    scanf("%d",&a);
    printf("Enter the second number:-\n");
    scanf("%d",&b);
    int result = add(a,b);
    printf("The addition of two numbers are = %d",result);
    return 0;
}

int add(int a1,int b1)
{
    int add = (a1+b1);
    return add;
}