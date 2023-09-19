#include <iostream>
#include "Train.h"
#include "Wagon.h"
#include "TrainReader.h"
#include "TrainConsole.h"

//cmake -G "MinGW Makefiles" ../

int main()
{
    std::cout << "Start..." << std::endl;
    int switcher;
    Train train;
    TrainConsole consoleTrain;
    TrainReader fileTrain;

    std::cout << " Select a train generation  (1 - Console; 2 - Read from file): ";
    std::cin >> switcher;

    switch (switcher)
    {
    case 1:
        consoleTrain.ConstructTrain(std::vector<std::string>{"Wood","Coal"});
        train = consoleTrain.getNewTrain();
        train.statusTrain();
        break;
    case 2:
        fileTrain.setFileToRead("dataTrain.txt");
        train = fileTrain.getNewTrain();
        train.statusTrain();
        break;
    default:
        std::cout << "Error: wrong command\n";
        return 0;
    }

    int sizeTrain = train.getSize();
    Train train1, train2;
    Wagon* wag;
    for (int i = 0; i < sizeTrain; i++)
    {
        wag = train.at(0);
        train.pop();
        if (wag->getCargoType() == "Wood")
        {
            train1.push(wag);
        }
        else 
        {
            train2.push(wag);
        }
    }
    std::cout << "\n--------RESULTS-------" << "\n";
    std::cout << "\nSize of Train1 = " << train1.getSize() << "\n\n";
    train1.statusTrain();
    std::cout << "\n\nSize of Train2 = " << train2.getSize() << "\n\n";
    train2.statusTrain();
    return 0;
}