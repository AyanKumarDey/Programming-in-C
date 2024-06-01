#include <stdio.h>
int main()
{
    int n;
    printf("Enter the length of the pattern:-\n");
    scanf("%d",&n);
    printf("The following pattern is:-\n");
    for(int i=0;i<n;i++)
    {
        for(int k=n;k>i+1;k--)
        {
            printf("  ");
        }
        for(int j=0;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}