//Write a function power using recursion that computes X raised to the power Y 
//for the integer x and y returns double type values
double power(float,int);
void main()
{
	double ans;
	float x;
	int y;
	
	printf("\n\tEnter the value of (x,y) : ");
	scanf("%f%d",&x,&y);
	
	ans=power(x,y);
	printf("\n\tX to the power Y : %0.2lf",ans);
}
    double power(float x, int y)
    {
    	if(y==0)
    	return 1;
    	else if(y==1)
    	return x;
    	return x*power(x,y-1);
	}
