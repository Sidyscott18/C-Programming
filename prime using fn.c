
#include <stdio.h> 
int primenumber(int number) 
{ 
	int i; 
	for (i = 2; i <= number - 1; i++) 
	{ 
		if (number % i == 0) 
			return 0; 
	} 
	else
	{
	
	return 1; 
     } 
}
 
int main() 
{ 
	int num = 17, res; 
	
	res = primenumber(num); 

	if (res == 1) 
		printf("%d is a prime number", num); 
	else
		printf("%d is not a prime number", num); 

	return 0; 
}

