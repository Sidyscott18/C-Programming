#include<stdio.h>
int convert(int n)
{
	if(n==0)
	{
		return 0;
	}
	else {
	    return(n%10+2*convert(n/10));
	}
}
int main()
{
	int bin=1111;
	printf( "%d",convert(bin));
}
