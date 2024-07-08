#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number:-\n");
    scanf("%d",&n);
    int count = 0;
    int i = 1;
    while(i <= n)
    {
        if(n%i == 0)
        {
            count++;
        }
        i++;
    }
    if(count == 2)
    {
        printf("The Number Entered Is Prime");
    }
    else
    {
        printf("The Number Is Not Prime");
    }
    return 0;
}