#include<stdio.h>

int main()
{
	int a=0,b=0;
	
	printf("Enter two numbers : " );
	scanf("%d",&a);
	scanf("%d",&b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("The numbers after swaping are: %d %d", a,b);
}

