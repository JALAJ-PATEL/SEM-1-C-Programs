//WAP to store marks of 5 subjects for five students. Calculate and print total marks of each
//student, highest marks in each subject, lowest marks in each subject, percentage of each student.
#include<stdio.h>
void main()
{
	int stud[5][5],low[5],high[5],i,j,sum=0;
	float per[5],marks[5];
	
//Entry of marks in 2-D Array
    
    printf("\n\tEnter the Marks of \n1)Chemistry, 2)Maths, 3)Physics 4)English 5)Computer: \n");
    
    for(i=0; i<5; i++)
    {
    	for(j=0; j<5; j++)
    	{
    		scanf("%d",&stud[i][j]);
    		sum +=stud[i][j];
		}
		marks[i]=sum;
	    per[i]= sum/5.0;
	    sum=0;
	}
//Finding Highest,Lowest of Each Subjects

    sum=0;
    for(j=0; j<5; j++)
    {
    	for(i=0; i<5; i++)
    	{
    		if(i==0)
    		{
    		high[j]=stud[i][j];
    		low[j]=stud[i][j];
    	    }
    		if(stud[i][j]>high[j])
    		high[j]=stud[i][j];
    		if(stud[i][j]<low[j])
    		low[j]=stud[i][j];
		}
	}
	
//Printing the Results of Students
    printf("\n\n\tTOTAL MARKS OF THE STUDENT :");
    for(i=0; i<5; i++)
    printf("\n\tTotal Marks of Student %d = %f",i+1,marks[i]);
    
    printf("\n\n\tPERCENTAGE OF EACH STUDENT : ");
    for(i=0; i<5; i++)
    printf("\n\tPercentage of Student %d = %4.2f",i+1,per[i]);
    
    printf("\n\n\tHIGHEST SCORES IN EACH SUBJECTS : ");
    for(i=0; i<5; i++)
    printf("\n\tHighest Scores in Subject %d = %d",i+1,high[i]);
    
    printf("\n\n\tLOWEST SCORES IN EACH SUBJECTS : ");
    for(i=0; i<5; i++)
    printf("\n\tLowest Scores in Subject %d = %d",i+1,low[i]);
    
}
