#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    ptr = malloc(5*sizeof(int)); //Dynamically Creating Memory.(At Heap)
    printf("Enter the elements in the memory block:-\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",(ptr+i));
    }
    printf("The Elements in the memory block is:-\n");
    for(int j=0;j<5;j++)
    {
        printf("%d\t",*(ptr+j));
    }
    free(ptr);//To Free Up The Heap Memory.
    return 0;
}