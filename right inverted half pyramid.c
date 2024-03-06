#include<stdio.h>
int main()
{
	int i,rows=5,j;
	for(i=0;i<=rows;i++)
	{
		for(j=0;j<=rows-i+1;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
	
