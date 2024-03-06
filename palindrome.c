#include<stdio.h>
int main()
{
	int num=121,reverse=0,rem=0,palindrome=0;
	palindrome=num;
	while(num!=0)
	{
		rem= num%10;
		reverse= (reverse*10)+rem;
		num= num/10;
	}
	if(palindrome==reverse)
	{
		printf("the given number is palindrome");
	}
	else
	{
		printf("the given number is not a palindrome");
	}
	return 0;
}

