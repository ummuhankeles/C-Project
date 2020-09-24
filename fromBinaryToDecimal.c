#include<stdio.h>
int main()
{
	int number;
	int i;
	int rem[15];
	int decimalnum=0;
	
	printf("Enter the binary number:\n");
	scanf("%d",&number);
	
	while(number!=0)
	{
	    rem[i]=number%10;
	    number=number/10;
	    decimalnum=decimalnum+rem[i]*pow(2,i);
	    i++;		
	}
	

	printf("\nDecimal Number:\n");
	printf("%d",decimalnum);
	
	return 0;

}
