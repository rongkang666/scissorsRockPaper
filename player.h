#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>

using namespace std;


class Player{
private:
    string name;//player name
    string playerMove;//player move,i.e. scissors,rock,paper
    
public:
    //normal constructor to set player name
    Player(string tmpName){
        name=tmpName;
    }
    //retrieve palyer name
    virtual string getName();
    //get player move string
    virtual string performMove();
    virtual string getMove();
    
    
    
};
    
#endif
    
    
    
   

