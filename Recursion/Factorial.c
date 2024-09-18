#include <stdio.h>
int factorial(int);
int main()
{
    int n;
    printf("Enter the number for which factorial will be generated:-\n");
    scanf("%d",&n);
    int result = factorial(n);
    printf("The factorial of %d is = %d",n,result);
    return 0;
}

int factorial(int x)
{
    if(x==1)
    {
        return 1;
    }
    else
    {
        return x*factorial(x-1);
    }
}