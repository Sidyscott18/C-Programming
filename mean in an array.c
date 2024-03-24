#include<stdio.h>
int main()
{
	int i,mean1,mean,length;
	int a[5]={2,2,2,2,2};
	length=sizeof(a)/sizeof(a[0]);
	for(i=0;i<=5;i++)
	{
		mean1=(mean1+a[i]);
	}
	mean=(mean1/length);
	printf("mean %d",length);
	return 0;
}
