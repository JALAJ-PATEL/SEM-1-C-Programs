/* WAP to find SIMPLE INTEREST*/

#include<stdio.h>
#include<math.h>
void main()
{
	float P,R,T,SI,CI,d;
	
	printf("\tEnter the value of PRINCIPLE AMOUNT : ");
	scanf("%f",&P);
	printf("\n\tEnter the value of RATE OF INTEREST : ");
	scanf("%f",&R);
	printf("\n\tEnter the value of TIME PERIOD : ");
	scanf("%f",&T);
	
	SI=(P*R*T)/100;
	CI=P*(pow((1+R/100),T)-1);
	d= CI-SI;
	
	printf("\n\n\tSIMPLE INTEREST =%f",SI);
    printf("\n\n\tCOMPOUND INTEREST =%f",CI);
    printf("\n\n\tDifference between SI & CI =%f",d);
}
