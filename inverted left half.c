#include<stdio.h>
int main()
{
	int i,rows=5,j,k;
	for(i=0;i<=rows;i++)
	{
		for(j=0;j<=2*i;j++)
		{
			printf(" ");
		}
		for(k=0;k<=rows-i;k++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}	

