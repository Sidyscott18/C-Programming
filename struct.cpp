#include<stdio.h>
#include<string.h>
struct list
{
	int n;
	char m[300];
}s1;

int main()
{
	struct list s1={1, "SIDDARTH" };

	
	printf(" %d\n%s\n",s1.n,s1.m);
	return 0;
}
