#include "../header/Cell.h"
#include "../header/Burning.h"

Cell::Cell(State *state) {
    this->state = state;
}

void Cell::changeState(State *newState) {
//    delete(state);
    state = newState;
}

void Cell::play(bool isNeighbourBurning) {
    State* newState = state->play(isNeighbourBurning);
    if(isDifferentState(newState)) changeState(newState);
//    else delete(newState);
}

bool Cell::isBurning() {
    if(dynamic_cast<const Burning*>(state) != nullptr) return true;
    return false;
}

char Cell::getIcon() {
    return state->icon;
}

bool Cell::isDifferentState(State *otherState) {
    if(otherState->icon == getIcon()) return false;
    return true;
}
