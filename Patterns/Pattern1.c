#include <stdio.h>
int main()
{
    int n;
    printf("Enter the length of the row:-\n");
    scanf("%d",&n);
    printf("The following pattern is:-\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
