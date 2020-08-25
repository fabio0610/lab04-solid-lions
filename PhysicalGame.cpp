//
// Created by Usuario on 24/8/2020.
//

#include "PhysicalGame.h"

PhysicalGame::PhysicalGame(const string &name, double price, double tax, double weight, double size) : Game(name, price,
                                                                                                            tax),
                                                                                                       weight(weight),
                                                                                                       size(size) {
double PhysicalGame::getWeight() const {
    return weight;
}

void PhysicalGame::setWeight(double weight) {
    PhysicalGame::weight = weight;
}

double PhysicalGame::getSize() const {
    return size;
}

void PhysicalGame::setSize(double size) {
    PhysicalGame::size = size;
}

string PhysicalGame::toString() {
    stringstream s;
    s<<Game::toString()<<endl;
    s<<"\t Weight: "<<getWeight()<<endl;
    s<<"\t Size: "<<getSize()<<endl;
}
string PhysicalGame::ship() {
    stringstream s;
    s<<"This product will have a shipment."<<endl;
    return s.str();
}
PhysicalGame::~PhysicalGame() {

}
