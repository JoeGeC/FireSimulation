#include <iostream>
#include "../header/Grid.h"
#include "../header/Burning.h"

void Grid::print() {
    for(int column = 0; column < gridSize; column++) {
        for (int row = 0; row < gridSize; row++) {
            std::cout << grid[column][row]->getIcon() << " ";
        }
        std::cout << std::endl;
    }
}

Grid::Grid() {
    for(int row = 0; row < gridSize; row++) {
        grid.push_back(std::vector<Cell*>());
        for (int column = 0; column < gridSize; column++) {
            grid[row].push_back(createCellFromPosition(row, column));
        }
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

void Grid::play() {
    for(int row = 0; row < gridSize; row++){
        for(int column = 0; column < gridSize; column++){
            grid[row][column]->play(isNeighbourBurning(row, column));
        }
    }
}

bool Grid::isNeighbourBurning(int row, int column) {
    if((row < gridSize - 1 && grid[row + 1][column]->isBurning()) ||
        (row > 0 && grid[row - 1][column]->isBurning()) ||
        (column < gridSize - 1 && grid[row][column + 1]->isBurning()) ||
        (column > 0 && grid[row][column - 1]->isBurning())) return true;
    return false;
}
