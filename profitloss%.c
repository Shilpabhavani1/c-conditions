#include<stdio.h>
void main()
{
	int c,s;
	printf("enter amount");
	scanf("%d%d",&c,&s);
	if(c<s)
	{
		printf("profit\n");
		printf("profit amount is :%d\n",s-c);
		printf("profit percentage is:%d",(s-c)+c/100);	
	}
	else
	{
		printf("loss\n");
		printf("loss of amount is :%d\n",c-s);
		printf("loss percentage is :%d",(c-s)*c/100);
	}
}
