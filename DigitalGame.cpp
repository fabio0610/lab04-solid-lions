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

double DigitalGame::discount() const {

    Game* game;

    double aux = game->priceWithTax();

    double discount = (aux * 0.15);

    return discount + aux;

}

string DigitalGame::toString() {
    stringstream s;

    s<<Game::toString();
    s<<"\t price with discount: "<<discount()<<endl;
    s<<"\t size in memory: "<<getSizeInMemory()<<endl;

    return s.str();
}
