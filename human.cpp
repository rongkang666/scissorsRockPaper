

#include <iostream>
#include <string>
#include "human.h"

using namespace std;

/***
*A function that takes one string and return move player taken
*@param string move
*@return HumanMove
***/

string Human::performMove(){
    string choice;
    cout<<"Please give your choice (scissors, rock, paper): "<<endl;
    cin>>choice;
    //human move
    humanMove=choice;
    return humanMove;
}

string Human::getMove(){
    return humanMove;
}
    





    
    
    
   

