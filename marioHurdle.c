#include <stdio.h>

int main(void)
{
    int h;
    
    do{
        printf("Enter the height:");
        scanf("%d",&h);
    }while (h<1 || h>8);

	int i,j,k,z,t;
    for(i=1;i<=h;i++){
        for(j=i;j<=h;j++){
            if(j!=h){
                printf(" ");
            }
            if(j==h){
                for(k=1;k<=i;k++) {
                    printf("#");
                }
                for(z=1; z<=2;z++) {
                    printf(" ");
                }
                for(t=1; t<=i; t++) {
                    printf("#");
                }
            }
        }
        printf("\n");
    }
}

