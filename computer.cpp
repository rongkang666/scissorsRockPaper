
#include <iostream>
#include <string>
#include <stdlib.h>
#include "computer.h"

using namespace std;

/***
*A function that takes one string and return move player taken
*@param string move
*@return computerMove
***/
string Computer::performMove(){
    
    //computer move
    string array[3]={"scissors","rock","paper"};//store scissors,rock,paper
    int randNum;//for computer making choice
    
    randNum=rand()%3;
    computerMove=array[randNum];

    return computerMove;
    
}
    



    
    
    
    
    
   

