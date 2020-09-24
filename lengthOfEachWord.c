#include<stdio.h>
#include<stdlib.h>

int countCharacter(char text[])
{
   int i=0;
   while(text[i]!=0)
   i++;
   return i;
}
int main()
{
	char text[100];
	int i,counter=0;
	
	int numbers[10]={0};
	printf("Enter the text:\n");
	gets(text);
	int numberOfCharacter=countCharacter(text);
	
	for(i=0; i<numberOfCharacter; i++)
	{
		if(text[i]==' ')
		{
			counter++;
		}
		else
		{
			numbers[counter]++;
		}
	}
	
	for(i=0; i<=counter; i++)
	{
		printf("There are %d character in the %d.word.\n",numbers[i],i);
	}
	
	return 0;
}

