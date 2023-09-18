#ifndef TRAINREADER_H
#define TRAINREADER_H

#include <string>
#include <vector>
#include <stack>
#include "Train.h"

class TrainReader
{
private:
    Train train;
    std::stack<Wagon*> stack;
public:
    TrainReader();
    ~TrainReader() {this->erase();}

    void setFileToRead(std::string);
    Train getNewTrain();
    void erase();
};

#endif