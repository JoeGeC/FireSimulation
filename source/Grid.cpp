#include <iostream>
#include "../header/Grid.h"

void Grid::print() {
    for(int column = 0; column < gridSize; column++) {
        for (int row = 0; row < gridSize; row++) {
            std::cout << grid[column][row]->icon << " ";
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

void Grid::replaceCell(int x, int y, Cell* replacementCell) {
    Cell *&cell = grid[x][y];
    delete cell;
    cell = replacementCell;
}

Cell* Grid::createCellFromPosition(int row, int column) {
    if(column == 0 || column == gridSize - 1 || row == 0 || row == gridSize - 1)
        return new Empty();
    return new Tree();
}
