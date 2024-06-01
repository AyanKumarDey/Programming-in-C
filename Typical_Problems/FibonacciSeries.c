//Fibonacci Series.
#include <stdio.h>
int main()
{
    int num;
    printf("Enter the max number for which the series will be generated:-\n");
    scanf("%d",&num);
    int a=0 , b=1;
    int c;
    printf("The following series is:-\n");
    printf("%d  %d  ",a,b);
    for(int i=0;i<num;i++)
    {
        c = a+b;
        printf("%d  ",c);
        a = b;
        b = c;
    }
    return 0;
}