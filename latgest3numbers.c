#include<stdio.h>
void main()
{
	int n1,n2,n3;
	printf("enter three numbers");
	scanf("%d%d%d",&n1,&n2,&n3);
	if(n1>n2 && n1>n3)
	{
		printf("%d",n1);
	}
	else if (n2>n3 && n2>n1 )
	{
		printf("%d",n2);
	}
	else if (n3>n1 && n3>n1)
	{
		printf("%d",n3);
	}
}
