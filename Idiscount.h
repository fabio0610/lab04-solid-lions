//
// Created by Usuario on 24/8/2020.
//

#ifndef LAB04_SOLID_IDISCOUNT_H
#define LAB04_SOLID_IDISCOUNT_H
#include <iostream>
#include <sstream>
using namespace std;

class Idiscount {
public:

    virtual double discount() const = 0;

    virtual ~Idiscount();
};


#endif //LAB04_SOLID_IDISCOUNT_H
