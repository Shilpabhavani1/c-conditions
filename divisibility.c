#include<stdio.h>
void main()
{
	int x;
	print("enter the number");
	scanf("%d",&x);
	if(x%1==0)
	{
		printf("divisible by 1");
	}
	if(x%2==0)
	{
		printf("divisibe by 2");
	}
	if(x%3==0)
	{
		printf("divisible by 3");
	}
	if(x%4==0)
	{
		printf("divisible by 4");
	}
	if(x%5==0)
	{
		printf("divisibe by 5");
	}
}
