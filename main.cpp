#include <iostream>
#include <string>
#include <math.h>
#include "player.h"
#include "referee.h"
#include "human.h"
#include "computer.h"
using namespace std;

int main()
{


    //create human object
    Player *human_player = new Human("Kang");
    //create computer object
    Player *computer_player = new Computer("Mac");
    //create referee object
    Referee referee;
    
    
    string humanM;
    humanM=human_player->performMove();
    //check move
    referee.checkMove(humanM);
    //make decision
    referee.makeDecision(human_player,computer_player);
    
 
    return 0;
    
}

    
    
    
    
    
   

