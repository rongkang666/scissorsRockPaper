

#include <iostream>
#include <string>
#include "referee.h"


using namespace std;

//check if human move is valid input
/***
*A function that takes one string and decide if human takes valid move
*@param string move1
***/
void Referee::checkMove(string move1){
        if(move1!="scissors" && move1!="rock" && move1!="paper"){
            cout<<"Invaid human input"<<endl;
            n=1;//n is set to 1 to conditionally output the invalid result
        }
        
}
    
    
//decide who won
/***
*A function that takes two Player pointer pointing to human and computer (ploymorphism) and
also two moves and then return the game result
*@param Player *human Player pointer pointing to object huamn
*@param Player *computer Player pointer pointing to object computer
*@paramstring move1 human move
*@paramstring move2 computer move
****/
void Referee::makeDecision(Player *human, Player *computer){
        if(n==1){
            cout<<"No result!"<<endl;
        }
    
    
    string computerM=computer->performMove();
    
        if(human->getMove()=="scissors"){
            if(computerM=="paper"){
                cout<<(human->getName())<<" won"<<endl;
            }else if(computerM=="rock"){
                cout<<(computer->getName())<<" won"<<endl;
            }else if(computerM=="scissors"){
                cout<<"This is a tie"<<endl;
            }
        }
        
        if(human->getMove()=="rock"){
            if(computerM=="paper"){
                cout<<(computer->getName())<<" won"<<endl;
            }else if(computerM=="rock"){
                cout<<"This is a tie"<<endl;
            }else if(computerM=="scissors"){
                 cout<<(human->getName())<<" won"<<endl;
            }
        }
        
        if(human->getMove()=="paper"){
            if(computerM=="paper"){
                cout<<"This is a tie"<<endl;
            }else if(computerM=="rock"){
                cout<<(human->getName())<<" won"<<endl;
            }else if(computerM=="scissors"){
                cout<<(computer->getName())<<" won"<<endl;
            }
        }
        
        
}
    
    











    
   

