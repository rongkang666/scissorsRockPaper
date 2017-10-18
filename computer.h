#ifndef COMPUTER_H
#define COMPUTER_H

#include <iostream>
#include <string>
#include "player.h"

using namespace std;


class Computer:public Player{
    
private:
    string computerMove;//computer move
    
public:
    //constructor
    Computer(string name_):Player(name_){}
    //computer performMove method
    string performMove();

    
};


#endif






    
    
    
   

