//
// Created by Maikol Guzman on 8/17/20.
//

#include <iomanip>
#include <fstream>
#include "Game.h"


Game::Game(const string &name, double price, double tax) : name(name), price(price), tax(tax) {}

const string &Game::getName() const {
    return name;
}

void Game::setName(const string &name) {
    Game::name = name;
}

double Game::getPrice() const {
    return price;
}

void Game::setPrice(double price) {
    Game::price = price;
}

double Game::getTax() const {
    return tax;
}

void Game::setTax(double tax) {
    Game::tax = tax;
}

double Game::priceWithTax() {

    double aux = getPrice() + ((getPrice() * getTax())/100);

}


string Game::toString() {
    stringstream s;

    s<<"\t Name: "<<getName()<<endl;
    s<<"\t Price: "<<getPrice()<<endl;
    s<<"\t Tax: "<<getTax()<<endl;
    s<<"\t final price with tax: "<<endl<<endl;

    return s.str();
}


Game::~Game() {

}
