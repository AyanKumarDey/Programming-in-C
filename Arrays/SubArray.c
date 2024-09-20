#include <stdio.h>
int SubArray(int *,int *,int,int);
int main()
{
    int n;
    printf("Enter the size of the first array:-\n");
    scanf("%d",&n);
    int m;
    printf("Enter the size of the second array:-\n");
    scanf("%d",&m);
    int arr[n];
    int arr2[m];
    printf("Enter the elements in the first array:-\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the elements in the second array:-\n");
    for(int j=0;j<m;j++)
    {
        scanf("%d",&arr2[j]);
    }
    SubArray(arr,arr2,n,m);
}

int SubArray(int *arr1,int *arr2,int n,int m)
{
    int count2 = 0;
    for(int i=0;i<m;i++)
    {
        int count = 0;
        for(int j=0;j<n;j++)
        {
            if(arr2[i]==arr1[j])
            {
                count++;
                count2++;
                break;
            }
        }
        if(count == 0)
        {
            printf("The array is not a sub array\n");
            break;
        }
    }
    if(count2==m)
    {
        printf("The array is a sub array\n");
    }
}
