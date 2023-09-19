#include "TrainReader.h"
#include <iostream>
#include <string>
#include <fstream>

TrainReader::TrainReader()
{
}

void TrainReader::setFileToRead(std::string pathToFile)
{
    std::ifstream file(pathToFile);
    int fSize;
    std::string fType;
    int fId;
    Wagon* wag;
    file >> fSize;
    for (int i = 0; i < fSize; i++)
    {
        wag = new Wagon;
        this->stack.push(wag);
        file >> fType >> fId;
        wag->setCargoType(fType);
        wag->setId(fId);
        this->train.push(wag);
    }
}

Train TrainReader::getNewTrain()
{
    return this->train;
}

void TrainReader::erase()
{
    for (int i = 0; i < this->train.getSize(); i++)
    {
        this->train.pop();
    }
    while (this->stack.size() > 0)
    {
        Wagon* point = this->stack.top();
        if (point != nullptr) delete point;
        this->stack.pop();
    }
}