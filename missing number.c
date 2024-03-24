#include<stdio.h>
#include<math.h>
int main()
{
	int i, a[5]={1,2,3,5},sum=0,missing,total,n=5 ;
	for(i=0;i<4;i++)
	{
		sum+=a[i];
	}
	missing=((n*(n+1))/2)-sum;
	printf("%d ",missing);
	return 0;
}

