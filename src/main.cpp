#include <iostream>
#include "Train.h"
#include "Wagon.h"
#include "TrainReader.h"

//cmake -G "MinGW Makefiles" ../

int main()
{
    std::cout << "Start..." << std::endl;
    Train train;
    TrainReader fileTrain;
    fileTrain.setFileToRead("C:/OOP_projects/Stack_Train_sorting/src/dataTrain.txt");
    train = fileTrain.getNewTrain();
    train.statusTrain();
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
    std::cout << "\nSize of Train1 = " << train1.getSize() << "\n";
    train1.statusTrain();
    std::cout << "\n\nSize of Train2 = " << train2.getSize() << std::endl;
    train2.statusTrain();
    return 0;
}