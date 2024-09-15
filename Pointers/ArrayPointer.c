//Insert value inside Array using pointer.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of the array:-\n");
    scanf("%d",&n);
    int arr[n];
    int *ptr;
    ptr = arr;
    printf("Enter the elements in the array:-\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ptr[i]);
    }
    printf("The array is:-\n");
    for(int j=0;j<n;j++)
    {
        printf("%d\t",ptr[j]);
    }
    return 0;
}