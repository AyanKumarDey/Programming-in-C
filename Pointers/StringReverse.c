//Reversing A String Using Pointer.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the length of the string:-\n");
    scanf("%d",&n);
    printf("Enter the string:-\n");
    char str1[n];
    getchar();
    fgets(str1,sizeof(str1),stdin);
    char str2[n]; //Reverse String.
    char *ptr;
    ptr = str1;
    printf("The string before reversing is:-\n %s",ptr);
    while(*ptr != '\0')
    {
        ptr+=1;
    }
    ptr--;
    for(int i=0;i<n;i++)
    {
        str2[i] = *ptr;
        ptr--;
    }
    printf("\nThe string after reversing is:-\n %s",str2);
    return 0;
}