#include "../header/Empty.h"

Empty::Empty() {
    icon = ' ';
}

State* Empty::play(bool isNeighbourBurning) {
    return this;
}
