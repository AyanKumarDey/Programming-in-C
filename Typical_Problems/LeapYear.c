#include <stdio.h>
int main()
{
    int year;
    printf("Enter the year:-\n");
    scanf("%d",&year);
    if(year%4==0)
    {
        if(year%100==0)
        {
            if(year%400==0)
            {
                printf("The year is a Leap Year");
            }
            else
            {
                printf("Th year is not a Leap Year");
            }
        }
        else
        {
            printf("The year is a Leap Year");
        }
    }
    else
    {
        printf("The year is not a Leap Year");
    }
    return 0;
}