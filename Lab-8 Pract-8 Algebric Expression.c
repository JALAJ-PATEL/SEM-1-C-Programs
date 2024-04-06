/*Write a program to evaluate x - x^3/3! + x^5/5! - x^7/7!....*/

#include <stdio.h>
#include <math.h>
int factorial(int );
int main() 
{
    long int x, sum = 0;
    int i;
    printf("\n\tEnter the value of x: ");
    scanf("%ld", &x);
    
	for (i=0; i<100; i++)
    {
        sum += pow(-1, i) * pow(x, 2 * i + 1) / factorial(2 * i + 1);
    }
    printf("\n\tResult: %ld", sum);
    return 0;
}

    int factorial(int n) 
    {
        int i, fact = 1;
        for (i = 1; i <= n; i++) 
        {
            fact *= i;
        }
        return fact;
    }

