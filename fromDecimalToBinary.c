#include<stdio.h>
void decimal_to_binary(int number)
{
	int i;
	int rem[15];
		
   	while(number!=0)
	{
	    rem[i]=number%2;
	    number=number/2;
	    printf("%d ",rem[i]);
	    i++;
   	}	

	printf("\nBinary Number:\n");
	for(i=(i-1); i>=0; i--)
	{
		printf("%d ",rem[i]);
	}	
}

int main()
{
	int number;

	printf("Enter the number:\n");
	scanf("%d",&number);
	
    decimal_to_binary(number);
	
	return 0;
}
