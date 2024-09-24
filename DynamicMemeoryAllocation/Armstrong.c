#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n,i;
    printf("Enter the size of the memory block:-\n");
    scanf("%d",&n);
    int *ptr;
    ptr = calloc(n,sizeof(int)); //Dynamically Allocating Memory.
    printf("Enter the element's in the memory block:-\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",ptr+i);
    }
    printf("\nThe element's in the memory block is:-\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",*(ptr+i));
    }
    printf("\nTo check whether the number's present in the memory block are Armstrong or not:-\n");
    for(i=0;i<n;i++)
    {
        int num,num2,num3;
        int count=0;
        num=num2=num3=*(ptr+i);
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
            printf("%d is Armstrong number\n",*(ptr+i));
        }
        else
        {
            printf("%d is not an Armstrong number\n",*(ptr+i));
        }
    }
    free(ptr); //Deallocating The memory block.
    return 0;
}