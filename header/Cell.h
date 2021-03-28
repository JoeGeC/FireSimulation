#ifndef FIRESIMULATION_CELL_H
#define FIRESIMULATION_CELL_H


#include "State.h"

class Cell {
private:
    State* currentState;

public:
    void play(bool isNeighbourBurning);
    Cell(State *currentState);
    void changeState(State *newState);
    bool isBurning();
    char getIcon();
};


#endif //FIRESIMULATION_CELL_H
