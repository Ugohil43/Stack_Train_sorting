#ifndef TRAIN_H
#define TRAIN_H

#include "Wagon.h"

class Train
{
private:
    Wagon* first_wag;
    int size;
public:
    Train();
    ~Train();

    Wagon* at(int i);
    void pop();
    void push(Wagon*);
    int getSize();
    void statusTrain();
};

#endif