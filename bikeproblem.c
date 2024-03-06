#include<stdio.h>
#include<math.h>
int main()
{
	float costperlitre = 102.34;
	float distance = 36.7 , costperweek , milage=15 ;
	costperweek= (distance*2/milage)*6*costperlitre;
	printf("the money spent in a week is %.2f",costperweek);
	return 0;
}
