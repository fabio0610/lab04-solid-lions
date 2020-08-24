//
// Created by Fabio Villalobos on 24/8/2020.
//

#ifndef LAB04_SOLID_PHYSICALGAME_H
#define LAB04_SOLID_PHYSICALGAME_H

#endif //LAB04_SOLID_PHYSICALGAME_H
#include "Game.h"

class PhysicalGame : public Game{
private:
    double itemWeight;
    string productDimensions;
public:
    PhysicalGame() {}

    PhysicalGame(const string &name, double price, double itemWeight, const string &productDimensions) : Game(name,
                                                                                                              price),
                                                                                                         itemWeight(
                                                                                                                 itemWeight),
                                                                                                         productDimensions(
                                                                                                                 productDimensions) {}

    PhysicalGame(double itemWeight, const string &productDimensions) : itemWeight(itemWeight),
                                                                       productDimensions(productDimensions) {}


    double getItemWeight() const {
        return itemWeight;
    }

    void setItemWeight(double itemWeight) {
        PhysicalGame::itemWeight = itemWeight;
    }

    const string &getProductDimensions() const {
        return productDimensions;
    }

    void setProductDimensions(const string &productDimensions) {
        PhysicalGame::productDimensions = productDimensions;
    }
};