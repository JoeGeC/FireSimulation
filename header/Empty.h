#ifndef FIRESIMULATION_EMPTY_H
#define FIRESIMULATION_EMPTY_H


#include "Cell.h"

class Empty : public State{
public:
    Empty();
    State* play(bool isNeighbourBurning) override;
};


#endif //FIRESIMULATION_EMPTY_H
