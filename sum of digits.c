#include<stdio.h>
int main()
{
	int num=15 ,sum=0,rem;
	while(num!=0)
	{
		rem= num%10;
		sum= sum+rem;
		num= num/10;
	}
	printf("the sum of the digits is %d",sum);
	return 0;
}

