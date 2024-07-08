#include <stdio.h>
int prime(int);

int main()
{
    int n;
    printf("Enter the range of the numbers for which prime number will be created:-\n");
    scanf("%d",&n);
    prime(n);
    return 0;
}

int prime(int n1)
{
    int count = 0;
    for(int i=1;i<=n1;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if(i%j == 0)
            {
                count ++ ;
            }
        }
        printf("\n");
        if(count == 2)
        {
            printf("The prime numbers are = %d ",i);
            count = 0;
        }
        else
        {
            printf("The non-prime numbers are = %d ",i);
            count = 0;
        }
    }
}