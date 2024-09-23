#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,i;
    printf("Enter the size of the memory block:-\n");
    scanf("%d",&n);
    int *ptr;
    ptr = calloc(n,sizeof(int));
    printf("Enter the elements in the memory block:-\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",(ptr+i));
    }
    printf("\nThe elements in the memory block is:-\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",*(ptr+i));
    }
    printf("\nThe odd & even elments in the memory block:-\n");
    int count1=0,count2=0;
    for(i=0;i<n;i++)
    {
        if(*(ptr+i)%2==0)
        {
            printf("The element %d is even\n",*(ptr+i));
            count1++;
        }
        else
        {
            printf("The element %d is odd\n",*(ptr+i));
            count2++;
        }
    }
    printf("The total number of even & odd's in the memory block is %d even & %d odd",count1,count2);
    free(ptr);
    return 0;
}