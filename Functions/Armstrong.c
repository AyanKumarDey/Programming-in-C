#include <stdio.h>
#include<math.h>
int Armstrong(int);

int main()
{
    int n;
    printf("Enter the number:-\n");
    scanf("%d",&n);
    Armstrong(n);
    return 0;
}

int Armstrong(int n1)
{
    int n2 = n1;
    int n3 = n1;
    int count = 0;
    int r,sum=0;
    while(n1 != 0)
    {
        n1 = n1/10;
        count++;
    }
    while(n2 != 0)
    {
        int r = n2%10;
        n2 = n2/10;
        sum += pow(r,count);
    }
    if(sum == n3)
    {
        printf("The number given by the user is Armstrong");
    }
    else
    {
        printf("The number given by the user is not Armstrong");
    }
}