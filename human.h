#ifndef HUMAN_H
#define HUMAN_H

#include <iostream>
#include <string>
#include "player.h"

using namespace std;


class Human:public Player{

private:
    string humanMove;//human move

    
public:
    //constructor
    Human(string name_):Player(name_){}

    //human performMove method
    string performMove();
    
    string getMove();
    
    
};


#endif
    
    
    
   

