#include<stdio.h>
#include<stdlib.h>

int main()
{
	int A[3][2];
	int B[3][2];
	int C[3][2];
	int i,j;
	
	printf("Enter the A matrix values:\n");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&A[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%6d",A[i][j]);
		}
		printf("\n");
	}	
	
	printf("\nEnter the B matrix values:\n");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&B[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%6d",B[i][j]);
		}
		printf("\n");
	}
	
	printf("\nSum of matrices:\n");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			C[i][j]=A[i][j]+B[i][j];
		}
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%6d",C[i][j]);
		}
		printf("\n");
	}

    return 0;
}
