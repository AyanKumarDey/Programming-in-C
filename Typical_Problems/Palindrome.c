#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number:-\n");
    scanf("%d",&num);
    int num1 = num;
    int sum = 0, r;
    while (num > 0)
    {
        r = num % 10;
        num = num / 10;
        sum = (sum * 10) + r;
    }
    if (sum == num1)
    {
        printf("The number entered is palindrome\n");
    }
    else
    {
        printf("Not an palindrome number\n");
    }
    return 0;
}