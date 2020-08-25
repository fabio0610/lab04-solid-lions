//
// Created by Usuario on 24/8/2020.
//

#ifndef LAB04_SOLID_DIGITALGAME_H
#define LAB04_SOLID_DIGITALGAME_H
#include "Game.h"
#include "Idiscount.h"


class DigitalGame : public Game, Idiscount{
private:
    double sizeInMemory;
public:

    DigitalGame(const string &name, double price, double tax, double sizeInMemory);

    double getSizeInMemory() const;

    void setSizeInMemory(double sizeInMemory);

    double discount() const override ;

    string toString();

    virtual ~DigitalGame();

};


#endif //LAB04_SOLID_DIGITALGAME_H
