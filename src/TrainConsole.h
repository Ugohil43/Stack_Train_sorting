#ifndef TRAINCONSOLE_H
#define TRAINCONSOLE_H

#include <string>
#include <vector>
#include <stack>
#include "Train.h"

class TrainConsole
{
private:
    Train train;
    std::stack<Wagon*> stack;
public:
    TrainConsole();
    ~TrainConsole(){this->erase();}
    
    void ConstructTrain(std::vector<std::string>);
    Train getNewTrain();
    void erase();
};

#endif