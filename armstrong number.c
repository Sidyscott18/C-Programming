#include<stdio.h>
int main()
{
	int num=153,temp,rem,sum=0;
	temp=num;
	while(num!=0)
	{
		rem=num%10;
		sum= sum+(rem*rem*rem);
		num= (num/10);	
	}
	if(temp==sum)
	{
		printf("the given %d is an armstrong number",temp);
	}
	else
	{
		printf("the given %d is not an armstrong number ",temp);
	}
	
}

