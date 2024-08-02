#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter the three number:-\n");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c)
    {
        printf("The nunber %d is greater than %d & %d",a,b,c);
    }
    else if(b>c && b>a)
    {
        printf("The number %d is greater than %d & %d",b,a,c);
    }
    else
    {
        printf("The number %d is greater than %d & %d",c,a,b);
    }
}