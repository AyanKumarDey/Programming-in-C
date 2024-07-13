#include <stdio.h>
int Palindrome(int);

int main()
{
    int n;
    printf("Enter the number:-\n");
    scanf("%d",&n);
    Palindrome(n);
    return 0;
}

int Palindrome(int n1)
{
    int num = n1;
    int sum = 0;
    int r;
    while(n1 != 0)
    {
        int r = n1%10;
        n1 = n1/10;
        sum = sum*10+r;
    }
    if(sum == num)
    {
        printf("The number entered is Palindrome");
    }
    else
    {
        printf("The number entered is not Palindrome");
    }
}