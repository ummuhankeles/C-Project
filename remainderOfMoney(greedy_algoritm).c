#include <math.h>
#include <stdio.h>

int main() {
    float dollars;
    do {
        printf("Change owed:");
        scanf("%f",&dollars);
    }while(dollars<0);

    int cents = round(dollars*100);

    int counter = 0;
    int i;
    for(i=cents; i>=0; i--) {    
        if(cents >= 25) {
            counter++;
            cents = cents - 25;
        }
        else if(cents >= 10) {
            counter++;
            cents = cents - 10;
        }
        else if(cents >= 5) {
            counter++;
            cents = cents - 5;
        }
        else if(cents >= 1) {
            counter++;
            cents = cents - 1;
        }
    }
    if(counter > 0) {
        printf("Counter: %d\n", counter);
    }
}

