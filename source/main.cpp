#include <iostream>
#include "../header/Grid.h"
#include "../header/Simulation.h"

int main() {
    auto* simulation = new Simulation();
    simulation->start();
    return 0;
}

