#include <iostream>
#include <string>
#include "player.h"

using namespace std;

/***
*A function that return name
*@return name
***/
string Player::getName(){
    return name;
}

/***
*A function that takes one string and return move player taken
*@param string move
*@return playerMove
***/

string Player::performMove(){
    //perform move
    string move;
    cout<<"Input player move"<<endl;
    cin>>move;
    
    playerMove=move;
    return playerMove;
}

string Player::getMove(){
    return playerMove;
}

   

