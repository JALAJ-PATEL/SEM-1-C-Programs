//Write a function to find factorial of a number using recursion.
#include<stdio.h>
int fact(int y)
{
    if(y==0 || y==1)
    {
    return 1;
    }
    else
    {
    return y*fact(y-1);
    }
}
    int main()
    {
        long int n;
        printf("\n\tENTER NUMBER TO GET FACTORIAL: ");
        scanf("%d",&n);
        printf("\n\tTHE FACTORIAL OF %ld : %ld ",n,fact(n));
        return 0;
    }
