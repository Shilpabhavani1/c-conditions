#include<stdio.h>
void main()
{
	int m,p,c,cs,marks;
	printf("enter the m,p,c,cs marks");
	scanf("%d%d%d%d",&m,&p,&c,&cs);
	if (m<35)
	{
		printf("failed in maths");
	}
	if(p<35)
	{
		printf("failed in physics");
	}
	 if(c<35)
	{
		printf("failed in chemistry");
	}
	if(cs<35) 
	{
		printf("failed in computer science");
	}
	
}

