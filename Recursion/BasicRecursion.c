#include <stdio.h>
void print(int);

void main()
{
    int a;
    printf("Enter the number:-\n");
    scanf("%d",&a);
    print(a);
}

void print(int x)
{
    if(x == 1)
    {
        printf("Hello AyanKrDey");
    }
    else
    {
        printf("Hello AyanKrDey\n");
        print(x-1);
    }
}