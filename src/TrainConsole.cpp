#include <iostream>
#include <string>
#include <fstream>
#include "TrainConsole.h"

TrainConsole::TrainConsole()
{
}

void TrainConsole::ConstructTrain(std::vector<std::string> types)
{
    if(this->train.getSize() > 0)
    {
        std::cout << "\t| Train is not empty! Erace it and make new.";
        std::cout << std::endl;
        return;
    }

    //std::cout << "\t|welcame to eTrain setap|\n";
    std::cout << "> Enter quantity of \"wagons\" : \n < ";
    int inSize;
    std::cin >> inSize;
    for (int i = 0; i < inSize; i++)
    {
        int tInd;
        int wId;
        Wagon* wag = new Wagon;
        this->stack.push(wag);
        std::cout << "   Wagon # " << inSize - i <<"\n";
        std::cout << "Enter cargo type : \n";
        for(int i = 0; i < types.size(); i++)
        {
            std::cout << ">\t["<< types[i] <<"] : "<< i <<"\n";
        }
        //std::cout << "> type type (0, "<<types.size()-1<<")\n";
        std::cin >> tInd;
        wag->setCargoType(types[tInd]);

        std::cout << "Enter wagon id :\n < ";
        std::cin >> wId;
        wag->setId(wId);
        this->train.push(wag);
        std::cout << "__________________\n";
    }
    std::cout << "Train is ready for sort\n\n";
}

Train TrainConsole::getNewTrain()
{
    return this->train;
}

void TrainConsole::erase()
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
