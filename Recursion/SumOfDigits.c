#include <stdio.h>
int add(int num)
{
    static int sum = 0;
    int r,count=1;
    while(count==1)
    {
        r=num%10;
        num=num/10;
        count++;
    }
    if(num == 0)
    {
        sum+=r;
    }
    else
    {
        sum+=r;
        add(num);
    }
    return sum;
}

void main()
{
    int n;
    printf("Enter the number:-\n");
    scanf("%d",&n);
    int c = add(n);
    printf("The sum of digits is = %d",c);
}