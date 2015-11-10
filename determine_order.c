#include<stdio.h>
#include<stdlib.h>

char determine_order(void);

char main(void){
}

char determine_order(void){
        int p1;
        char z;

        while(1){
        scanf("%c", &z);

        if(z == 'x' || z == 'X'){
                printf("You have chosen to play as %c", z);
                return 'X';
        }else if(z == 'O' || z == 'o'){
                printf("You have chosen to play as %c", z);
                return 'O';
        }else{
                puts("Try again");
                continue;
        }
}
}
