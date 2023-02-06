#include "game1.h"


void mune()
{
      printf("**********************\n");
      printf("****0.exit 1.start****\n");
      printf("**********************\n");
}

void initboard(char board[ROW][COL],int row,int col)
{
    int i=0,j=0;
    for(;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            board[i][j]=' ';
        }
    }
}

void displayboard(char board[ROW][COL],int row,int col)
{
    int i=0,j=0;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf(" %c ",board[i][j]);
            if(j<col-1)
            {
                printf("|");
            }
        }
        printf("\n");

        if(i<row-1)
        {
        for(j=0;j<col;j++)
        {
            printf("---");
            if(j<col-1)
            {
                printf("|");
            }
        }
        printf("\n");
        }
    }
}

void playermove(char board[ROW][COL],int row,int col)
{
    printf("Turn to player move\n");
    int x=0,y=0;
    printf("Enter the coordinates you want to play chess\n");
    while(1)
    {
    scanf("%d %d",&x,&y);
    if(x>=1&&x<=row&&y>=1&&y<=col)
    {
        if(board[(x-1)][(y-1)] ==' ')
        {
           board[x-1][y-1] ='*';
           break;
        }
        else
        {
            printf("This corrdinate has been occupied\n");
            printf("%c test\n",board[x-1][y-1]);
        }
        
    }
    else
        {
            printf("Lllegal coordinates,please input again\n");
        }
    }
    
}

void computermove(char board[ROW][COL],int row,int col)
{
    int x=0,y=0;
    printf("turn to computer move\n");
   while(1)
   {
    x=rand()%row;
    y=rand()%col;
    printf("%d %d\n",x,y);
    if(board[x][y]==' ')
    {
        board[x][y]='#';
        break;
    }
   }
}

int full(char board[ROW][COL],int row,int col)
{
    int c=0,v=0;
    for(;c<row;c++)
    {
        for(;v<col;v++)
        {
            if(board[c][v]==' ')
            return 1;
           
        } 
    }
    return 0;
}
char win(char board[ROW][COL],int row,int col)
{
    int i=0;
    int ret=0;
    for(;i<row;i++)
    {
        if(board[i][0]==board[i][1]&&board[i][1]==board[i][2]&&board[i][0]!=' ')
        {
            return board[i][1];
        }
        
    }

    for(i=0;i<col;i++)
    {
        if(board[0][i]==board[1][i]&&board[1][i]==board[2][i]&&board[0][i]!=' ')
        {
            return board[1][i];
        }
    }

    if(board[1][1]==board[2][2]&&board[0][0]==board[1][1]&&board[0][0]!=' ')
    {
        return board[1][1];
    }
    if(board[0][2]==board[1][1]&&board[1][1]==board[2][0]&&board[0][2]!=' ')
    {
        return board[0][2];
    }

    
    ret=full(board,ROW,COL);
    if(ret==0)
    {
        return 'Q';
    }
    return 'C';
}

void game()
{
    int tmp=0;
    char board[ROW][COL]={'a'};
    initboard(board,ROW,COL);
    displayboard(board,ROW,COL);
    
    
    while(1)
    {
   
    playermove(board,ROW,COL);
    displayboard(board,ROW,COL);
    computermove(board,ROW,COL);
    displayboard(board,ROW,COL);
    tmp=win(board,ROW,COL);
    // if(tmp!='C')
    // {
    //     break;
    // }
    
    }
    // if(tmp=='*')
    // {
    //     printf("Player win\n");

    // }
    // else if(tmp=='#')
    // {
    //     printf("Computer win\n");
    // }
    
    // else
    // {
    //     printf("The board is full,tie");
    // }
}

void test()
{
    printf("input a number\n");
    int var;
    srand((unsigned int )time(NULL));
    
    do
    {
        scanf("%d",&var);
        switch(var)
        {
            case 1:
            printf("game start\n");
            game();
            break;

            case 0:
            printf("exit game\n");
            break;

            default :
            printf("wrong var,please input again\n");
            break;

        }


    }while(var);
}

int main()
{
    mune();
    test();
    return 0;
}