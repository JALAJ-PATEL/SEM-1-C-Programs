/* Write a calculator program (add, subtract, multiply and divide). Prepare user defined 
function for each functionality.*/
#include<stdio.h>
void calc(int a,int b, int c)
{
    if (c==1)
    {
        printf("ANSWER : %d",a+b);
    }
    else if(c==2)
    {
        printf("ANSWER : %d",a-b);
    }
    else if (c==3)
    {
        printf("ANSWER : %d",a*b);
    }
    else
    {
        printf("ANSWER : %d",a/b);
    }
}
    int main()
    {
        int a,b,c;
        printf("ENTER OPTION : \n");
        printf("1. SUM \n2.SUBTRACTION\n3.MULTIPLICATION\n4.DIVISION\n");
        scanf("%d",&c);
        printf("ENTER TWO NUMBERS A : ");
        scanf("%d",&a);
        printf("ENTER TWO NUMBERS B : ");
        scanf("%d",&b);
        calc(a,b,c);
        return 0;
    }
