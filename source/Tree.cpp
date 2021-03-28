#include "../header/Tree.h"
#include "../header/Burning.h"

Tree::Tree() {
    icon = '&';
}

State* Tree::play(bool neighbourIsBurning) {
    if(neighbourIsBurning) return new Burning();
    return this;
}
