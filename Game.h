//
// Created by Maikol Guzman on 8/17/20.
//

#ifndef LAB04_SOLID_GAME_H
#define LAB04_SOLID_GAME_H
#include <sstream>
#include <iostream>

using namespace std;
class Game  {

private:
    string name;
    double price;
    double tax;

public:

    Game(const string &name, double price, double tax);

    const string &getName() const;

    void setName(const string &name);

    double getPrice() const;

    void setPrice(double price);

    double getTax() const;

    void setTax(double tax);

    virtual ~Game();

    virtual string toString() ;

    double priceWithTax();

};


#endif //LAB04_SOLID_GAME_H
