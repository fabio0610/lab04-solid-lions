//
// Created by Maikol Guzman on 8/17/20.
//

#ifndef LAB04_SOLID_GAME_H
#define LAB04_SOLID_GAME_H
#include <sstream>

using namespace std;
class Game  {
public:
    Game();
    Game(const string &name, double price);
    const string &getName() const;
    void setName(const string &name);

    double getPrice() const;

    void setPrice(double price);

    double getTax() const;

    void setTax(double tax);

    //double getItemWeight() const;

    //void setItemWeight(double itemWeight);

    //const std::string &getProductDimensions() const;

    //void setProductDimensions(const string &productDimensions);

    virtual double calculatePriceWithTax() = 0;

    void save(const string &filename);

    virtual string toString();
private:
    string name;
    double price;
    double tax;
};


#endif //LAB04_SOLID_GAME_H
