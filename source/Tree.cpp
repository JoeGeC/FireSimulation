#include <cstdlib>
#include <ctime>
#include <random>
#include "../header/Tree.h"
#include "../header/Burning.h"

Tree::Tree() {
    icon = '&';
}

State* Tree::play(bool neighbourIsBurning) {
    if(neighbourIsBurning && get5050())
        return new Burning();
    return this;
}

bool Tree::get5050() {
    std::random_device seed;
    std::mt19937 randomNumberGenerator(seed());
    std::uniform_real_distribution<double> dist(0.0, 2.0);
    return dist(randomNumberGenerator) > 1;
}
