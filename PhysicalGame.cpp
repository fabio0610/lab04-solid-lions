//
// Created by Tere Solano on 24/8/2020.
//

#include "PhysicalGame.h"

PhysicalGame::PhysicalGame() {}

PhysicalGame::PhysicalGame(const string &name, double price) : Game(name, price) {}

string PhysicalGame::ship() {
    stringstream s;
    s<<" This product will have a shipment. "<<endl;
    return s.str();
}
string PhysicalGame::toString() {
    stringstream s;
    s<<"Name: "<<getName()<<endl;
    s<<"Price: "<<getPrice()<<endl;
    reu
}