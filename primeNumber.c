#include<stdio.h>
int main()
{
	int number,i,counter=0;
	
	printf("Enter the number:\n");
	scanf("%d",&number);
	
	if(number==1)
	{
		printf("The number isn't prime.");
		return;
	}
	
	if(number<1)
	{
		printf("The number is invalid number.");
		return;
	}
	
	for(i=2;i<number;i++)
	{
        if(number%i==0)
        {
	        counter++;
	    }
	}
	
	if(counter==0)
	{
		printf("The number is prime.");
	}
	else
	{
		printf("The number isn't prime.");
	}

	return 0;
}
