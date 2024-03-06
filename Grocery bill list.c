#include<stdio.h>
int main()
{
	printf("         Welcome to Fruit-Mart             ");
	printf("\n___________________________________________________\n\n");
	float cash_received=5000 , balance,Total_bill,apple_price=50,watermelon_price=70,banana_price=20,apple_kg=5,watermelon_kg=2,banana_kg=3;
	Total_bill= (apple_price*apple_kg)+(watermelon_price*watermelon_kg)+(banana_price*banana_kg);
	balance=cash_received-Total_bill;
	printf("Total bill = %f\n",Total_bill);
	printf("balance = %f \n",balance);
	printf("\n");
	printf("Thanks for shopping\n");
	printf("___________________________________");
	return 0;
}
	
