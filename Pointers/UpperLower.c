#include <stdio.h>
int main()
{
    char c;
    printf("Enter the upper case character:-\n");
    char *ptr;
    ptr = &c;
    scanf("%c",ptr);
    int count = 0;
    for(int i=65;i<=90;i++)
    {
        if(*ptr == (char)i)
        {
            count++;
            break;
        }
        count++;
    }
    int count2 = 0;
    for(int i = (int)'a';i<=(int)'z';i++)
    {
        count2++;
        if(count == count2)
        {
            printf("The lower case character is:-\n");
            printf("%c",(char)i);
        }
    }
    return 0;
}