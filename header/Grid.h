#ifndef FIRESIMULATION_GRID_H
#define FIRESIMULATION_GRID_H

#include <vector>
#include "Cell.h"
#include "Tree.h"
#include "Empty.h"

class Grid {
private:
    static const int gridSize = 21;
    std::vector<std::vector<Cell*>> grid;
    Cell* createCellFromPosition(int row, int column);

public:
    Grid();
    void print();
    void startFire();
    void play(Grid *pGrid);
    bool isNeighbourBurning(int row, int column);
};


#endif
