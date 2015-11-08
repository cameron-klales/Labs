#include<stdio.h>
#include<stdlib.h>

int determine_order(void);

int main(void){
}

int determine_order(void){
        int p1;
        char z;

        while(1){
        scanf("%c", &z);

        if(z == "x" || z == "X"){
                printf("You have chosen to play as %c, z");
                return 1;
        }else if(z == "O" || z == "o"){
                printf("You have chosen to play as %c, z");
                return 2;
        }else{
                puts("Try again");
                continue;
        }
}
}
