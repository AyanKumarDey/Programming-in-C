#include <stdio.h>
int isLeapYear(int,int);
typedef struct Date
{
    int date;
    int year;
}Date;
int main()
{
    Date d;
    printf("Enter the date:-\n");
    scanf("%d",&d.date);
    printf("Enter the year:-\n");
    scanf("%d",&d.year);
    isLeapYear(d.date,d.year);
}

int isLeapYear(int x,int y)
{
    if(y%4 == 0)
    {
        if(y%100 == 0)
        {
            if(y%400 == 0)
            {
                printf("The date %d of %d is Leap Year\n",x,y);
            }
            else
            {
                printf("The date %d of %d is not a Leap Year\n",x,y);
            }
        }
        else
        {
            printf("The date %d of %d is Leap Year\n",x,y);
        }
    }
    else
    {
        printf("The date %d of %d is not a Leap Year\n",x,y);
    }
}