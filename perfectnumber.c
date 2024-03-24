#include<stdio.h>  
 int main()    
{
	int i,n=6,sum=0,temp=6;
	for(i=1;i<6;i++)
	{
		if(n%i==0)
		{
			sum=sum+i;
		}
	}
	if(sum==temp)
	{
		printf("it is a perfect number");
		
	}
	else
	{
		printf(" it is not a perfect number");
	}

	return 0;
}
