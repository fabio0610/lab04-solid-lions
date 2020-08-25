//
// Created by Usuario on 24/8/2020.
//

#include "DigitalGame.h"

DigitalGame::DigitalGame(const string &name, double price, double tax, double sizeInMemory) : Game(name, price, tax),
                                                                                              sizeInMemory(
                                                                                                      sizeInMemory) {}

double DigitalGame::getSizeInMemory() const {
    return sizeInMemory;
}

void DigitalGame::setSizeInMemory(double sizeInMemory) {
    DigitalGame::sizeInMemory = sizeInMemory;
}

double DigitalGame::priceWithDiscount(){

    double aux = Game::priceWithTax();

    double discount = (aux * 0.15);

    return discount + aux;



}
