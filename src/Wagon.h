#ifndef WAGON_H
#define WAGON_H

#include <string>

class Wagon
{
private:
    std::string cargoType;
    int wagId;
public:
    Wagon();
    Wagon(std::string, int);
    ~Wagon();

    Wagon* nextWag;
    Wagon* getNext();
    std::string getCargoType()const;
    void setCargoType(std::string);
    int getId();
    void setId(int);
};

#endif