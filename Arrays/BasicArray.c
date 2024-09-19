#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of the array:-\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elemnts in the array:-\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The array is:-\n");
    for(int j=0;j<n;j++)
    {
        printf("%d\t",arr[j]);
    }
    return 0;
}