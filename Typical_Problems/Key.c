/*
Find Key :-
You are provided with 3 numbers: input1, input2 and input3. 
Each of these are four digit numbers within the range >= 1000 and <= 9999.
1000 <= input1 <= 9999 
1000 <= input2 <= 9999 
1000 <= input3 <= 9999
You are expected to find the Key using the below formula -
Key = (Thousands digit of input1 x Hundreds digit of input2) - (Smallest digit of input3) 
For e..g. if input1 = 3521, input2=2452, input3=1352, 
then Key = (3 * 4) - 1 = 13 
Assuming that the 3 numbers are passed to the given function. 
Complete the function to find and return the Key
*/
#include <stdio.h>
int key(int,int,int);

void main()
{
    int input1,input2,input3;
    printf("Enter the three numbers:-\n");
    scanf("%d %d %d",&input1,&input2,&input3);
    int result = key(input1,input2,input3);
    printf("The key is = %d",result);
}

int key(int n1,int n2,int n3)
{
    int key,td,hd,s;
    if((n1 >=1000 && n1 <= 9000) && (n2 >=1000 && n2 <=9000) && (n3 >=1000 && n3 <=9000))
    {
        td = n1/1000;
        int count = 0;
        int r = 0;
        int min=0,max=0;
        while(count<3)
        {
            r = n2%10;
            n2 = n2/10;
            count++;
        }
        hd = r;
        int r2=0;
        max = min = n3%10;
        while(n3!=0)
        {
            r2 = n3%10;
            n3 = n3/10;
            if(r2>=max)
            {
                max = r2;
            }
            else if(r2<=min)
            {
                min = r2;
            }
        }
        s = min;
    }
    key = (td*hd)-s;
    return(key);
}