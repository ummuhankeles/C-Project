#include<stdio.h>
int main()
{
    int i,j,row,column;
	
	printf("Enter the number of row:\n");
	scanf("%d",&row);
	printf("Enter the number of column:\n");
	scanf("%d",&column);
	
	int matrix[row][column];
	
	printf("Enter the element of matrix:\n");
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			scanf("%d",&matrix[i][j]);
		}
	}
	
	printf("Matrix:\n");
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			printf("%6d",matrix[i][j]);
		}
		printf("\n");
	}	
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			if(i==j)
			{
				matrix[i][j]=1;
			}
			else
			{
				matrix[i][j]=0;
			}
		}
	}
	
	printf("Unit Matrix:\n");
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			printf("%6d",matrix[i][j]);
		}
		printf("\n");
	}		

	return 0;
}
