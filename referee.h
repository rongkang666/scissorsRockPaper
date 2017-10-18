#ifndef REFEREE_H
#define REFEREE_H

#include <iostream>
#include <string>
//#include "human.h"
//#include "computer.h"
#include "player.h"


using namespace std;


class Referee{
    
private:
    int n;//check for the valid input
    
public:
    //check if human move is valid
    void checkMove(string move1);
    //decide who win method
    void makeDecision(Player *human, Player *computer);
      

};


#endif

    
    
    
    
   

