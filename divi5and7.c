#include<stdio.h>
void main()
{
	int num1,num2;
	printf("enter the num1,num2");
	scanf("%d%d",&num1,&num2);
	if(num1%5==0 && num2%7==0)
	{
		printf("yes");
	}
	else 
	{
		printf("no");
	}
}
