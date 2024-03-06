#include<stdio.h>
int main()
{
	int age[5]={17,9,19,40,45},cost,i;
	for(i=0;i<5;i++)
	{
		if (age[i]<=12)
		{	
			cost=cost+250;
		}
		else 
		{
			cost=cost+500;
		}
	}
	printf("Total amount : %d",cost);
	return 0;
}
