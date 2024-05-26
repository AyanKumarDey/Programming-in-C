#include <stdio.h>
#include <math.h>
int main()
{
    int num;
    printf("Enter the number:-\n");
    scanf("%d",&num);
    int num1 = num;
    int num2 = num;
    int count = 0;
    int r;
    int sum = 0;
    while(num != 0)
    {
        num = num/10;
        count++;
    }
    printf("The total numbers of digits is = %d\n",count);
    while(num1 != 0)
    {
        r = num1%10;
        num1 = num1/10;
        sum += pow(r,count);
    }
    if( sum == num2 )
    {
        printf("The number is Armstrong \n");
    }
    else
    {
        printf("The number is not Armstrong \n");
    }
    return 0;
}