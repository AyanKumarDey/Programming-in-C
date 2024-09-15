//Finding roots of a Quadratic Equation.
#include<stdio.h>
#include<math.h>
void quadratic(int *,int *,int *);
int main()
{
    int a,b,c;
    printf("Enter the coefficient's\n");
    scanf("%d %d %d",&a,&b,&c);
    quadratic(&a,&b,&c);
    return 0;
}

void quadratic(int *x,int *y,int* z)
{
    int a1,b1,c1;
    a1 = *x;
    b1 = *y;
    c1 = *z;
    int root1,root2;
    root1 = (-b1+sqrt(pow(b1,2)-(4*a1*c1)))/(2*a1);
    root2 = (-b1-sqrt(pow(b1,2)-(4*a1*c1)))/(2*a1);
    printf("The root's of the quadratic equation are %d & %d\n",root1,root2);
}