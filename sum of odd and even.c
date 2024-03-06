#include<stdio.h>
int main()
{
	int i,n=10,sum_even=0,sum_odd=0;
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			printf("the even numbers are %d\n",i);
			sum_even=sum_even + i;
		}
	}
	for(i=1;i<=10;i++)
	{
	if(i%2!=0)
		{
			printf("the odd numbers are %d\n",i);
			sum_odd= sum_odd+i;
		}
	}
	
		printf("the sum of the even numbers is %d\n",sum_even);
		printf("the sum of the odd numbers is %d",sum_odd);

	return 0;
}
