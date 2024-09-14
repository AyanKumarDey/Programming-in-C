#include <stdio.h>
#include <conio.h>
typedef struct circle
{
    int radius;
}c;
typedef struct rectangle
{
    int length;
    int breadth;
}r;
typedef struct triangle
{
    int length;
    int breadth;
    int height;
}t;
int main()
{
    int choice;
    float area;
    c a1;
    r a2;
    t a3;
    printf("Enter the choice:-\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        printf("Calculating the area of the circle:-\n");
        printf("Enter the radius of the circle:-\n");
        scanf("%d",&a1.radius);
        area = 3.14*a1.radius;
        printf("The area of the circle is %f\n",area);
        break;
        case 2:
        printf("Calculating the area of the rectangle:-\n");
        printf("Enter the length & breadth of the rectangle:- \n");
        scanf("%d %d",&a2.length,&a2.breadth);
        area = a2.length*a2.breadth;
        printf("The area of the rectangle is %f\n",area);
        break;
        case 3:
        printf("Calculating the area of the triangle:-\n");
        printf("Enter the length,breadth & height of the triangle:-\n");
        scanf("%d %d %d",&a3.length,&a3.breadth,&a3.height);
        area = (0.5)*a3.length*a3.breadth*a3.height;
        printf("The area of the triangle is %f\n",area);
        break;
        default:
        {
            printf("Invalid Input:-\n");
        }
    }
    return 0;
}