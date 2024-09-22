#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,count=0;
    printf("Enter the size of the memory:-\n");
    scanf("%d",&n);
    int *ptr = malloc(n*sizeof(int)); //Memory Allocation In Heap Memory.
    printf("Enter the elements in the memory:-\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",ptr+i);
        count++;
    }
    printf("The elements before reversing is:-\n");
    for(int j=0;j<n;j++)
    {
        printf("%d\t",*(ptr+j));
    }
    printf("\nThe elements after reversing is:-\n");
    for(int k=(count-1);k>=0;k--)
    {
        printf("%d\t",*(ptr+k));
    }
    free(ptr); //To Free Up The Heap Memory.
    return 0;
}