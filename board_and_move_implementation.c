#include<stdio.h>
#include<stdio.h>

void print_board(char board[]);
void implement_user_move(int board[]);

int main(void){
char tuna[9] = {'1','2','3','4','5','6','7','8','9'};
print_board(tuna[]);

return;

}


void print_board( int board[]){



        printf(" %c | %c | %c \n",board[0],board[1],board[2]);
        puts("-----------");
        printf(" %c | %c | %c \n",board[3],board[4],board[5]);
        puts("-----------");
        printf(" %c | %c | %c \n",board[6],board[7],board[8]);
return;
}

void implement_user_move(char board[ ]){
        int bn;
        scanf("Enter the box you would like to claim %d", &bn);
        /*check function runs*/
        board[bn]= "x"
}
