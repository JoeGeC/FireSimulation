#ifndef FIRESIMULATION_BURNING_H
#define FIRESIMULATION_BURNING_H


#include "Cell.h"

class Burning : public State {
public:
    Burning();
    State* play(bool isNeighbourBurning) override;
};


#endif //FIRESIMULATION_BURNING_H
