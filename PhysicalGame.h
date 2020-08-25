//
// Created by Tere Solano on 24/8/2020.
//

#ifndef LAB04_SOLID_PHYSICALGAME_H
#define LAB04_SOLID_PHYSICALGAME_H
#include "Game.h"

class PhysicalGame: public Game {
private:
    double weight;
    double size;
public:
    PhysicalGame();
    PhysicalGame(const string &name, double price);
    string ship();
    string toString();

};


#endif //LAB04_SOLID_PHYSICALGAME_H
