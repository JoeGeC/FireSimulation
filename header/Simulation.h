#ifndef FIRESIMULATION_SIMULATION_H
#define FIRESIMULATION_SIMULATION_H

#include <ios>
#include <iostream>
#include "../header/Grid.h"

class Simulation {
private:
    Grid* grid;
public:
    Simulation();
    void start();
    std::string getUserInput();
};


#endif //FIRESIMULATION_SIMULATION_H
