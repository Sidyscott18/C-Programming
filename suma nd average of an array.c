#include<stdio.h>
#include<math.h>
int main()
{
	int i, a[5]={10,20,30,40,50},sum=0;
	float average;
	for(i=0;i<5;i++)
	{
		sum+=a[i];
	}
	average=sum/5;
	printf("%d\n",sum);
	printf("%.2f",average);
	return 0;
}

