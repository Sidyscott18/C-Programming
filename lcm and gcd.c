#include<stdio.h>
int main()
{
	int a=2,b=4,i, gcd,lcm;
	for(i=1;i<=a&&b;i++)
	{
		if(a%i==0&&b%i==0)
		{
			gcd=i;
		}
	}
     lcm=(a*b)/gcd;
     printf("the gcd of the two numbers is %d\n",gcd);
     printf("the lcm of the two numbers is %d",lcm);
     return 0;
 }
