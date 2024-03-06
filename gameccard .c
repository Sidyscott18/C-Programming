#include<stdio.h>
#include<math.h>
int main()
{
	int rs= 4000;
	float b1=0.2 ,b2=0.3 ,b3=0.5 ,b4=0.6;
	if(rs==1000)
	{
		rs=(b1*rs)+rs;
		printf("the bonus added is 20%\n");
		printf("amount of cash in the card = %d",rs);
	}
	else if(rs==2000)
	{
		rs=(b2*rs)+rs;
		printf("the bonus added is 30%\n");
		printf("amount of cash in the card = %d",rs);
	}
	else if(rs==3000)
	{
	    rs=(b3*rs)+rs;
	    printf("the bonus added is 50%\n");
	    printf("amount of cash in the card =%d",rs);
    }
    else
    {
    	rs=(b4*rs)+rs;
    	printf("the bonus added is 60%\n");
    	printf("amount of cash in the card = %d",rs);
	}
return 0;
}


harshraj went to the gameshop.the gameshop manager said that with a card with rs1000 gets a bonus of 20%,rs2000 gets 30%,3000 gets 505 above 3000 gets 60%. find the total amount in his card?
	
