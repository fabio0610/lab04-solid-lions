//
// Created by Usuario on 24/8/2020.
//

#ifndef LAB04_SOLID_STREAMINGGAME_H
#define LAB04_SOLID_STREAMINGGAME_H
#include "Game.h"

class StreamingGame : public Game{
private:
    string category;
public:
    StreamingGame(const string &name, double price, double tax, const string &category);

    const string &getCategory() const;

    void setCategory(const string &category);

    string toString();

    string replaced();

    virtual ~StreamingGame();

};


#endif //LAB04_SOLID_STREAMINGGAME_H
