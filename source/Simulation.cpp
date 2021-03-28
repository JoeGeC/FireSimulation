#include "../header/Simulation.h"

Simulation::Simulation() {
    grid = new Grid();
    grid->startFire();
    grid->print();
}

void Simulation::start() {
    while(true){


        if(getUserInput() == "q") return;
    }
}

std::string Simulation::getUserInput(){
    std::string userInput;
    std::cin >> userInput;
    return userInput;
}