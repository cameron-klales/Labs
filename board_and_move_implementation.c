#include<stdio.h>
#include<stdio.h>

void print_board(char board[], char c);
void implement_user_move(int board[]);

int main(void){
char tuna[9] = {'1','2','3','4','5','6','7','8','9'};
char c = d;
print_board(tuna[],c);

return;

}


void print_board( char board[]){



        printf(" %c | %c | %c \n",board[0],board[1],board[2]);
        puts("-----------");
        printf(" %c | %c | %c \n",board[3],board[4],board[5]);
        puts("-----------");
        printf(" %c | %c | %c \n",board[6],board[7],board[8]);
return;
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

void implement_user_move(char board[ ], char c){
        int bn;
        while(1){
                bn = getspace();
                if (board[bn] != ' '){
                        printf("%d is already claimed, try again.", bn);
                        continue;
                }else{
                        printf("you have claimed %d",bn);
                        board[bn] = c;
                }
                }
        scanf("Enter the box you would like to claim %d", &bn);
        
        board[bn]= "x"
}
