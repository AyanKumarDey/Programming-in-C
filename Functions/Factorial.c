#include <stdio.h>
double fact(int);

int main()
{
    int n;
    printf("Enter the number for which the factorial will be generated:-\n");
    scanf("%d",&n);
    double result = fact(n);
    printf("The Factorial of %d is = %lf",n,result);
    return 0;
}

double fact (int n1)
{
    double r = 1;
    for(int i=n1; i>0 ;i--)
    {
        r *= i; 
    } 
    return r;
}