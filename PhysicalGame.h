//
// Created by Usuario on 24/8/2020.
//

#ifndef LAB04_SOLID_PHYSICALGAME_H
#define LAB04_SOLID_PHYSICALGAME_H
#include "Game.h"

class PhysicalGame : public Game {
public:
    PhysicalGame(const string &name, double price, double tax, double weight, double size);

    double getWeight() const;

    void setWeight(double weight);

    double getSize() const;

    void setSize(double size);

    virtual ~PhysicalGame();

    string toString();

    string ship();
private:
    double weight;
    double size;
};


#endif //LAB04_SOLID_PHYSICALGAME_H
