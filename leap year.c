#include<stdio.h>
#include<math.h>
int main()
{
	int year=2024,date=18,month=06;
	if(year%400==0)
	{
		printf("the given year %d/%d/%d is a leap year",month,date,year);
	}
	else if(year%100==0)
	{
		printf("the given year %d/%d/%d is not a leap year",month,date,year);
	}
	else if(year%4==0)
	{
		printf("the given year %d/%d/%d is a leap year",month,date,year);
	}
	else
	{
		printf("the given year %d/%d/%d is not a leap year",month,date,year);
	}
	return 0;
}
