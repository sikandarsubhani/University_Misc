#include <iostream>
#include<stdlib.h>
using namespace std;
int main() {
    char sq[9] {'1','2','3','4','5','6','7','8','9'};
    int PlayerTurn=1;
    bool GameOver = true;
do{
    cout<<sq[0]<<" | "<<sq[1]<<" | "<<sq[2]<<endl<<"---------\n";
    cout<<sq[3]<<" | "<<sq[4]<<" | "<<sq[5]<<endl<<"---------\n";
    cout<<sq[6]<<" | "<<sq[7]<<" | "<<sq[8]<<endl<<"---------\n";
    cout<<"Player "<<PlayerTurn<<"'s move ";

    char mark;
    (PlayerTurn==1)? mark='X' : mark ='O';
    bool validMove;
    
    do
    {
        char nextMove;
        cin>>nextMove;
        validMove=true;
        if(sq[0]== '1' && nextMove=='1') sq[0]=mark ;
        else if(sq[1]== '2' && nextMove=='2') sq[1]=mark ;
        else if(sq[2]== '3' && nextMove=='3') sq[2]=mark ;
        else if(sq[3]== '4' && nextMove=='4') sq[3]=mark ;
        else if(sq[4]== '5' && nextMove=='5') sq[4]=mark ;
        else if(sq[5]== '6' && nextMove=='6') sq[5]=mark ;
        else if(sq[6]== '7' && nextMove=='7') sq[6]=mark ;
        else if(sq[7]== '8' && nextMove=='8') sq[7]=mark ;
        else if(sq[8]== '9' && nextMove=='9') sq[8  ]=mark ;
        else{
        cout<<"Invalid Move!\nTry Agian\n";
        validMove=false;
        }
    } while (!validMove);
    GameOver=false;
    bool winGame=true;
    if (sq[0]!='1')
    {
        if (sq[0]==sq[1] && sq[2]==sq[0])
        {
            GameOver=true;
        }
        if (sq[0]==sq[3] && sq[6]==sq[0])
        {
            GameOver=true;
        }
        if (sq[0]==sq[4] && sq[8]==sq[0])
        {
            GameOver=true;
        }
    }
    if (sq[4]!='5')
    {
        if (sq[4]==sq[1] && sq[4]==sq[7])
        {
            GameOver=true;
        }
        if (sq[4]==sq[2] && sq[4]==sq[6])
        {
            GameOver=true;
        }
        if (sq[4]==sq[3] && sq[4]==sq[5])
        {
            GameOver=true;
        }
        if (sq[4]==sq[0] && sq[4]==sq[8])
        {
            GameOver=true;
        }
    }
    if (sq[8]!='9')
    {
        if (sq[8]==sq[7] && sq[8]==sq[6])
        {
            GameOver=true;
        }
        if (sq[8]==sq[5] && sq[8]==sq[2])
        {
            GameOver=true;
        }
    }

    if (!GameOver && sq[0]== '1' && sq[1]== '2' && sq[2]== '3'&&sq[3]== '4'&&sq[4]== '5'&&sq[5]== '6'&&sq[6]== '7'&&sq[7]== '8'&&sq[8]== '9')
    {
        GameOver=true;
        winGame=false;
    }
    if(GameOver){
        if (winGame)
        {
            cout<<"\nPlayer "<<PlayerTurn<<" wins!\n\n";
        }
        cout<<sq[0]<<" | "<<sq[1]<<" | "<<sq[2]<<endl<<"---------\n";
        cout<<sq[3]<<" | "<<sq[4]<<" | "<<sq[5]<<endl<<"---------\n";
        cout<<sq[6]<<" | "<<sq[7]<<" | "<<sq[8]<<endl<<"---------\n";
        cout<<"Play Again? Y/N ";
        char playagain;cin>>playagain;
        if (playagain=='y')
        {
            GameOver=false;
        sq[0]='1';sq[1]='2';sq[2]='3';sq[3]='4';sq[4]='5';sq[5]='6';sq[6]='7';sq[7]='8';sq[8]='9';    
        }
        PlayerTurn=1;
    }
        else{
            (PlayerTurn==1)? PlayerTurn=2 : PlayerTurn=1;
        }
    system("clear");
    }while(!GameOver);
}