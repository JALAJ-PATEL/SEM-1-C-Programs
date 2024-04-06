//WAP to calculate the electricity bill of a given customer.
//The Customer ID,name and units consumed by user should be taken from keyboard
//Display total amount to pay customer 

#include<stdio.h>
#include<math.h>
void main()
{
	int id;
	float unit,bill,surcharge;
	char name[30];
	
	printf("\n\tEnter your name : ");
	scanf("%s",&name);
	printf("\n\tEnter your Customer ID : ");
	scanf("%d",&id);
	printf("\n\tEnter the value of Unit Consumed : ");
	scanf("%f",&unit);
	
	printf("\n\tCUSTOMER NAME : %s",name);
    printf("\n\tCUSTOMER ID : %d",id);
    printf("\n\tUNIT CONSUMED : %.2f",unit);
    
    if(unit<=199)
     bill=unit*1.20;
    else if(unit>=200 && unit<400)
     bill=unit*1.50;
    else if(unit>=400 && unit<600)
     bill=unit*1.80;
    else if(unit>=600)
     bill=unit*2.00;
    
    if(bill<100)
    {
    	bill=100;
    	surcharge=0;
	}
	else if(bill>400)
	surcharge=bill*0.15;
	
	printf("\n\n\tAmount Charge : %.2f",bill);
	printf("\n\n\tSurcharge Amount : %.2f",surcharge);
	printf("\n\n\tNet Amount Paid By Customer : %.2f",bill+surcharge);
}
