#ifndef FIRESIMULATION_TREE_H
#define FIRESIMULATION_TREE_H


#include "Cell.h"

class Tree : public State{
public:
    Tree();
    State* play(bool neighbourIsBurning) override;
};


#endif //FIRESIMULATION_TREE_H
