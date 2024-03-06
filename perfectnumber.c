#include<stdio.h>  
 int main()    
{
	int i,n=6,sum=0;
	for(i=1;i<6;i++)
	{
		if(n%i==0)
		{
			sum=sum+i;
		}
	}
	printf("%d",sum);
	return 0;
}
