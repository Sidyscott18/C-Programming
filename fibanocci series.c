#include<stdio.h>
int main()
{
	int i,num1=0,num2=1,num3,terms=8;
	printf("%d %d ",num1,num2);
	for(i=0;i<=terms;i++)
	{
		num3=num1+num2;
		printf("%d ",num3);
		num1=num2;
		num2=num3;
	}
	return 0;
}
 
