#include "../header/Simulation.h"

Simulation::Simulation() {
    grid2 = new Grid();
    grid1 = new Grid();
    grid1->startFire();
    grid1->print();
}

void Simulation::start() {
    bool isGrid1 = false;
    while(true){
        play(isGrid1);
        isGrid1 = !isGrid1;
        if(getUserInput() == "q") return;
    }
}

void Simulation::play(bool isGrid1) {
    if(isGrid1){
        grid1->play(grid2);
        grid1->print();
    } else{
        grid2->play(grid1);
        grid2->print();
    }
}

std::string Simulation::getUserInput(){
    std::string userInput;
    std::cin >> userInput;
    return userInput;
}
