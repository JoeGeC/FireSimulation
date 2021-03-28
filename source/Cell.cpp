#include "../header/Cell.h"
#include "../header/Empty.h"

Cell::Cell(State *currentState) {
    this->currentState = currentState;
}

void Cell::changeState(State *newState) {
    currentState = newState;
}

void Cell::play(bool isNeighbourBurning) {
    State* newState = currentState->play(isNeighbourBurning);
    changeState(newState);
}

bool Cell::isBurning() {
    if(currentState->icon == 'x') return true;
    return false;
}

char Cell::getIcon() {
    return currentState->icon;
}
