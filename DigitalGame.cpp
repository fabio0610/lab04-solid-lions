//
// Created by Tere Solano on 24/8/2020.
//

#include "DigitalGame.h"

DigitalGame::DigitalGame(const string &name, double price, double itemWeight, const string &productDimensions) : Game(
        name, price), itemWeight(itemWeight), productDimensions(productDimensions) {}

DigitalGame::DigitalGame(double itemWeight, const string &productDimensions) : itemWeight(itemWeight),
                                                                               productDimensions(productDimensions) {}

double DigitalGame::getItemWeight() const {
    return itemWeight;
}

void DigitalGame::setItemWeight(double itemWeight) {
    DigitalGame::itemWeight = itemWeight;
}

const string &DigitalGame::getProductDimensions() const {
    return productDimensions;
}

void DigitalGame::setProductDimensions(const string &productDimensions) {
    DigitalGame::productDimensions = productDimensions;
}

double DigitalGame::discount() const {

    double aux = getPrice();
    double discount = aux * 0.15;

    return discount;

}

string DigitalGame::toString() {
    stringstream s;
    s<<"Name: "<<getName()<<endl;
    s<<"Price: "<<getPrice()<<endl;
    return s.str();
}




