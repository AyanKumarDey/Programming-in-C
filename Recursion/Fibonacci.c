#include <stdio.h>
int fibonacci(int,int,int,int);
int main()
{
    int n;
    printf("Enter the range of the series\n");
    scanf("%d",&n);
    int a=0,b=1;
    int sum = 0;
    printf("%d %d ",a,b);
    fibonacci(a,b,n,sum);
    return 0;
}

int fibonacci(int x,int y,int z,int sum1)
{
    if(z == 0)
    {
        return 0;
    }
    else
    {
        sum1 = x+y;
        x=y;
        y=sum1;
        printf("%d ",sum1);
        fibonacci(x,y,z-1,sum1);
    }
}