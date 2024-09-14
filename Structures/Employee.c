#include <stdio.h>
#include <conio.h>
#include <string.h>
typedef struct NAME
{
    char First_Name[10];
    char Middle_Name[10];
    char Last_Name[10];
}name;
typedef struct Address
{
    char Area[10];
    char city[10];
    char state[10];
}address;
typedef struct Employee
{
    int Emp_ID;
    name n; //Structure calling another Structure.
    address a; //Structure calling another Structure.
    int Age;
    int Salary;
    char Designation[20];
}E;
int main()
{
    E employee;
    int empid,age,salary;
    printf("Enter the employee id:-\n");
    scanf("%d",&empid);
    employee.Emp_ID = empid; 
    strcpy(employee.n.First_Name,"Ayan");
    strcpy(employee.n.Middle_Name,"Kumar");
    strcpy(employee.n.Last_Name,"Dey");
    strcpy(employee.a.Area,"Bandapara,Banpara,Post:-Tribeni,Dist:-Hooghly");
    strcpy(employee.a.city,"Tribeni");
    strcpy(employee.a.state,"West Bengal");
    printf("Enter the age of the employee:-\n");
    scanf("%d",&age);
    employee.Age = age;
    printf("Enter the salary of the employee:-\n");
    scanf("%d",&salary);
    employee.Salary = salary;
    printf("Enter the designation of the employee:-\n");
    getchar();
    fgets(employee.Designation, sizeof(employee.Designation), stdin);
    printf("--\t--\t--\t--\n");
    printf("The Employee Details Is :- \n");
    printf("Employee Id = %d\n",employee.Emp_ID);
    printf("Employee Name Is %s %s %s\n",employee.n.First_Name,employee.n.Middle_Name,employee.n.Last_Name);
    printf("Employee Address Is %s %s %s\n",employee.a.Area,employee.a.city,employee.a.state);
    printf("Employee Age = %d\n",employee.Age);
    printf("Employee Salary = %d\n",employee.Salary);
    printf("Employee Designation = %s\n",employee.Designation);
    return 0;
}