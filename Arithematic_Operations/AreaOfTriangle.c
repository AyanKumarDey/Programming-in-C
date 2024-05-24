#include <stdio.h>
int main()
{
    int b,h;
    printf("Enter the breadth of the triangle:-\n");
    scanf("%d",&b);
    printf("Enter the height of the triangle:-\n");
    scanf("%d",&h);
    float area;
    area = (0.5)*b*h;
    printf("The area of the triangle is = %f\n",area);
    return 0;
}