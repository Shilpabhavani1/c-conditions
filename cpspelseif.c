#include<stdio.h>
void main()
{
	int costprice,sellprice;
	printf("enter the cost price and sell price");
	scanf("%d%d",&costprice,&sellprice);
	if(sellprice>costprice)
	{
		printf("profit");
	}
	else if(costprice>sellprice)
	{
		printf(" loss");
	}
	else
	{
	               printf("no profit no loss");	
	} 
}
