#ifndef FIRESIMULATION_SIMULATION_H
#define FIRESIMULATION_SIMULATION_H

#include <ios>
#include <iostream>
#include "../header/Grid.h"

class Simulation {
private:
    Grid* grid1;
    Grid *grid2;
public:
    Simulation();
    void start();
    std::string getUserInput();

    void play(bool isGrid1);
};


#endif //FIRESIMULATION_SIMULATION_H
