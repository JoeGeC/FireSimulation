#ifndef FIRESIMULATION_CELL_H
#define FIRESIMULATION_CELL_H


#include "State.h"

class Cell {
private:
    State* state;

public:
    Cell();
    void play(bool isNeighbourBurning);

    Cell(State *state);

    void changeState(State *newState);

    bool isBurning();

    char getIcon();

    bool isDifferentState(State *otherState);
};


#endif //FIRESIMULATION_CELL_H
