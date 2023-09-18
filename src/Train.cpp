#include <iostream>
#include "Train.h"

Train::Train()
{
    this->first_wag = nullptr;
    this->size = 0;
}

Train::~Train()
{
}

Wagon* Train::at(int i)
{
    if (i >= this->size) return nullptr;
    Wagon* res = this->first_wag;
    while (i > 0)
    {
        if (res->nextWag == nullptr) return nullptr;
        res = res->nextWag;
        i--;
    }
    return res;
}

void Train::push(Wagon* Wag)
{
    Wag->nextWag = this->first_wag;
    this->first_wag = Wag;
    this->size++;
}

void Train::pop()
{
    this->first_wag = this->first_wag->nextWag;
    this->size--;
}

int Train::getSize()
{
    return this->size;
}

void Train::statusTrain()
{
    std::cout << "Size of Train = " << this->size << "\n";
    Wagon* currentWagon = this->first_wag;
    for (int i = 0; i < this->size; i++)
    {
        std::cout << "Wagon # " << i << ":\n";
        std::cout << "Cargo Type : " << currentWagon->getCargoType() << "\n";
        std::cout << "Id :         " << currentWagon->getId() << "\n\n";
        currentWagon = currentWagon->nextWag;
    }
}