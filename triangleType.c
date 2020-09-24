#include<stdio.h>
int main()
{
	int a,b,c;
	
	printf("Enter the A triangle edge:");
	scanf("%d",&a);
	printf("Enter the B triangle edge:");
	scanf("%d",&b);
	printf("Enter the C triangle edge:");
	scanf("%d",&c);
	
	if((a==b) && (b==c))
	{
		printf("All edges are equal.The triangle is equilateral.");
	}
	else if((a==b) || (b==c) || (a==c))
	{
		printf("The two edges are equal.The triangle is isosceles.");
	}
	else
	{
		printf("All edges are different.The triangle is variously.");
	}
	
	return 0;
}
