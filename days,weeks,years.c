#include<stdio.h>
int main()
{
	int days=400 ;
	float years,weeks;
	years = days/365;
	weeks=(days%365)/7;
	days= days-((years*365)+(weeks*7));
	printf("the years is %f\n",years);
	printf("the days is %d\n",days);
	printf("the weeks is %f",weeks);
	return 0;
}

