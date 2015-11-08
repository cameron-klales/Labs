#include<stdio.h>
#include<stdlib.h>

int getspace();

int main(void){

}
int a = getspace();

}
int getspace( void ){
        int a;
        while (1){
                scanf("%d", &a);
                        if ( a>9 || a<1){
                                return a;
                        }else{
                                puts("try again");
                                continue;
                        }
                }
return 0;
}
