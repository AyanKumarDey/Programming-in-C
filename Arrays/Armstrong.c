#include <stdio.h>
#include <math.h>
int main()
{
    int n,i;
    printf("Enter the size of the array:-\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements in the array:-\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nThe elements in the array is:-\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\nTo check whether the number's present in the memory block are Armstrong or not:-\n");
    for(i=0;i<n;i++)
    {
        int num,num2,num3;
        int count=0;
        num=num2=num3=a[i];
        int r;
        int sum=0;
        while(num)
        {
            num = num/10;
            count++;
        }
        while(num2)
        {
            r=num2%10;
            sum = sum + pow(r,count);
            num2=num2/10;
        }
        if(sum==num3)
        {
            printf("%d is Armstrong number\n",a[i]);
        }
        else
        {
            printf("%d is not an Armstrong number\n",a[i]);
        }
    }
}