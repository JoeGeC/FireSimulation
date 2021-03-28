#ifndef FIRESIMULATION_STATE_H
#define FIRESIMULATION_STATE_H


class State {
public:
    char icon;
    virtual State* play(bool isNeighbourBurning) = 0;
    virtual ~State();
};


#endif //FIRESIMULATION_STATE_H
