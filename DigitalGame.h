//
// Created by Tere Solano on 24/8/2020.
//

#ifndef LAB04_SOLID_DIGITALGAME_H
#define LAB04_SOLID_DIGITALGAME_H
#include <sstream>
#include <iostream>
#include "Game.h"
using namespace std;
class DigitalGame : public Game{
private:
    double itemWeight;
    string productDimensions;
public:
    DigitalGame(const string &name, double price, double itemWeight, const string &productDimensions);

    DigitalGame(double itemWeight, const string &productDimensions);

    double getItemWeight() const;

    void setItemWeight(double itemWeight);

    const string &getProductDimensions() const;

    void setProductDimensions(const string &productDimensions);
};


#endif //LAB04_SOLID_DIGITALGAME_H
