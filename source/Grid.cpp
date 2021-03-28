#include <iostream>
#include "../header/Grid.h"
#include "../header/Burning.h"

Grid::Grid() {
    for(int row = 0; row < gridSize; row++) {
        grid.push_back(std::vector<Cell*>());
        for (int column = 0; column < gridSize; column++) {
            grid[row].push_back(createCellFromPosition(row, column));
        }
    }
}

void Grid::print() {
    for(int column = 0; column < gridSize; column++) {
        for (int row = 0; row < gridSize; row++) {
            std::cout << grid[column][row]->getIcon() << " ";
        }
        std::cout << std::endl;
    }
}

Cell* Grid::createCellFromPosition(int row, int column) {
    if(column == 0 || column == gridSize - 1 || row == 0 || row == gridSize - 1)
        return new Cell(new Empty());
    return new Cell(new Tree());
}

void Grid::startFire() {
    Cell* cell = grid[gridSize / 2][gridSize / 2];
    cell->changeState(new Burning());
}

void Grid::play(Grid *otherGrid) {
    for(int row = 0; row < gridSize; row++){
        for(int column = 0; column < gridSize; column++){
            if(otherGrid->grid[row][column]->isBurning())
                grid[row][column]->changeState(new Empty());
            bool neighbourBurning = otherGrid->isNeighbourBurning(row, column);
            grid[row][column]->play(neighbourBurning);
        }
    }
}

bool Grid::isNeighbourBurning(int row, int column) {
    if((row < gridSize - 1 && grid.at(row + 1).at(column)->isBurning()) ||
        (row > 0 && grid.at(row - 1).at(column)->isBurning()) ||
        (column < gridSize - 1 && grid.at(row).at(column + 1)->isBurning()) ||
        (column > 0 && grid.at(row).at(column - 1)->isBurning())) return true;
    return false;
}