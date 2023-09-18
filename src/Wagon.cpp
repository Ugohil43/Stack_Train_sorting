#include "Wagon.h"

Wagon::Wagon()
{
    this->nextWag = nullptr;
}

Wagon::Wagon(std::string type, int id) : cargoType(type), wagId(id), nextWag(nullptr)
{

}

Wagon::~Wagon()
{
}

std::string Wagon::getCargoType()const
{
    return this->cargoType;
}

void Wagon::setCargoType(std::string type)
{
    this->cargoType = type;
}

int Wagon::getId()
{
    return this->wagId;
}

void Wagon::setId(int id)
{
    this->wagId = id;
}