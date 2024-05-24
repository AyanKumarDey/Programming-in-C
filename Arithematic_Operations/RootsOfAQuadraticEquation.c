#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    printf("Enter the three values of the quadratoc equation:-\n");
    scanf("%d %d %d",&a,&b,&c);
    float r1,r2;
    r1 = (-b + sqrt((b*b) - 4*a*c))/(2*a);
    r2 = (-b - sqrt((b*b) - 4*a*c))/(2*a);
    printf("The roots of the quadratic equations are %f & %f",r1,r2);
    return 0;
}