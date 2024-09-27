#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of pattern:-\n");
    scanf("%d",&n);
    int count = 1;
    printf("The pattern is:-\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            printf("%d ",count);
            count++;
        }
        printf("\n");
    }
    return 0;
}