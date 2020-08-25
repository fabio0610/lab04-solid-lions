//
// Created by Usuario on 24/8/2020.
//

#include "StreamingGame.h"

StreamingGame::StreamingGame(const string &name, double price, double tax, const string &category)
: Game(name, price,tax),category(category) {}


const string &StreamingGame::getCategory() const {
    return category;
}

void StreamingGame::setCategory(const string &category) {
    StreamingGame::category = category;
}
string StreamingGame::toString() {
    stringstream s;
    Game::toString();
    s<<"Category: " <<getCategory()<<endl;
    return s.str();
}
string StreamingGame::replaced() {
    stringstream s;
    s<<"This product will have a replacement."<<endl;
    return s.str();
}