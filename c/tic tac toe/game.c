#include<stdio.h> 

char box[10]={'0','1','2','3','4','5','6','7','8','9'};

void creating_board();
// void marking_board();
int checking_the_wnner(int,char);

void creating_board()
 {
     printf("\n\n\tTIC-TAC-TOE\n\n");
     printf("player 1 (X) -- player 2 (O)\n\n"); 
     printf(" ___________ \n");
     printf("|   |   |   |\n");
     printf("|%c  |%c  |%c  |\n", box[1], box[2], box[3]);
     printf("|___|___|___|\n");
     printf("|   |   |   |\n");
     printf("|%c  |%c  |%c  |\n", box[4], box[5], box[6]);
     printf("|___|___|___|\n");
     printf("|   |   |   |\n"); 
     printf("|%c  |%c  |%c  |\n", box[7], box[8], box[9]);
     printf("|___|___|___|\n");
  
 } 

 

void marking_board(int choice, char mark)
 {
    if(choice==1 && box[1]=='1')
        box[1]=mark;
    else if(choice==2 && box[2]=='2')
        box[2]=mark;
    else if(choice==3 && box[3]=='3')
        box[3]=mark;
    else if(choice==4 && box[4]=='4')
        box[4]=mark;
    else if(choice==5 && box[5]=='5')
        box[5]=mark;
    else if(choice==6 && box[6]=='6')
        box[6]=mark;
    else if(choice==7 && box[7]=='7')
        box[7]=mark;
    else if(choice==8 && box[8]=='8')
        box[8]=mark;
    else if(choice==9 && box[9]=='9')
        box[9]=mark;
    else
    {
        printf("invalid_option");
    }

    // printf("%d", choice);
   
 }


int main()

{
    int choice,player=1,i;
    char mark;
    do{
        creating_board();
        player=(player % 2)? 1: 2;

        printf("player %d, enter a number",player);
        scanf("%d",&choice);

        mark = (player==1) ? 'X' : 'O';
        marking_board(choice,mark);

        i=check_for_win();
        player++;

    }while (i == -1);

    creating_board();

    if (i==1)
        printf("player %d you have wone the match ",--player);
    else
        printf("draw!");
    


    return 0; 
 }




