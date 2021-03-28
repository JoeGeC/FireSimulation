#include "../header/Burning.h"
#include "../header/Empty.h"

Burning::Burning() {
    icon = 'x';
}

State* Burning::play(bool isNeighbourBurning) {
    return new Empty();
}
