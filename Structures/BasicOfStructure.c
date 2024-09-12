#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct Basic{
    int roll;
    char name[20];
}x;
int main()
{
    x a;
    int r;
    printf("Enter the roll number of the student:-\n");
    scanf("%d",&r);
    a.roll = r;
    printf("Enter the name of the student:-\n");
    strcpy(a.name,"Ayan Kumar Dey");
    printf("The name of the student is %s\n",a.name);
    printf("The roll number of the student is %d\n",a.roll);
}