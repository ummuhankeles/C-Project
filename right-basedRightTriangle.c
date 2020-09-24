#include <stdio.h>

int main(void)
{
    int h;
    
    do{
        printf("Enter the height:");
        scanf("%d",&h);
    }while (h<1 || h>8);

	int i,j,k;
    for(i=1;i<=h;i++){

        for(j=i;j<=h;j++){

            if(j!=h){
                printf(" ");
            }
            if(j==h){
                for(k=1;k<=i;k++){
                    printf("#");
                }    
            }
        }
        printf("\n");
    }
}

