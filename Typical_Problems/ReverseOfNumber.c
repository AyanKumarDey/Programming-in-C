#include <stdio.h>
void main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    printf("The number before reverse is %d\n",n);
    int r,rev=0;
    while(n)
    {
        r=n%10;
        n=n/10;
        rev = rev*10+r;
    }
    printf("The number after reversing is %d",rev);
}