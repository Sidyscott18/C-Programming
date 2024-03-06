#include<stdio.h>
int main()
{
	int amount=1000 ,annual_interest,withdraw=0,annual_amount;
	float  interest=0.2 ;
	annual_interest= (amount*interest);
	printf("the amount of interest gained annually is %d\n",annual_interest);
	annual_amount=amount+annual_interest-withdraw;
	printf("the money in her account after 1 year is %d",annual_amount);
	return 0;	
}
