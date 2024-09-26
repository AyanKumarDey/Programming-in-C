#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
typedef struct Prime
{
    int p1[10];
}p;
int main()
{
    p prime;
    int i;
    printf("Enter the elements in the array:-\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&prime.p1[i]);
    }
    printf("\nThe array is:-\n");
    for(i=0;i<10;i++)
    {
        printf("%d\t",prime.p1[i]);
    }
    printf("\nChecking each and every element is prime or not:\n");
    for(i=0;i<10;i++)
    {
        if(prime.p1[i]>2)
        {
            int count = 0;
            for(int j=2;j<prime.p1[i];j++)
            {
                if(prime.p1[i]%j==0)
                {
                    printf("The number %d is composite.\n",prime.p1[i]);
                    count++;
                    break;
                }
            }
            if(count==0)
            {
                printf("The number %d is prime.\n",prime.p1[i]);
            }
        }
        else if(prime.p1[i]==2)
        {
            printf("The number %d is prime.\n",prime.p1[i]);
        }
        else if(prime.p1[i]==1)
        {
            printf("The number %d is composite.\n",prime.p1[i]);
        }
    }
    return 0;
}