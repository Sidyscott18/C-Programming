#include<stdio.h>
int main()
{
int a[3][3]={1,2,3,4,5,6,7,8,9},i,j,sum;
float avg;
	int length=sizeof(a)/sizeof(a[0]);
	for(i=0;i<length;i++)
	{
		for(j=0;j<length;j++)
		{
				sum+=a[i][j];
		}
	}
	avg=sum/9;
		printf("%d\n%f",sum,avg);
	return 0;
}
