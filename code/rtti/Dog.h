//
// Created by pby on 2022/8/20.
//

#ifndef DEMO_DOG_H
#define DEMO_DOG_H

#include "Animal.h"


class Dog : public Animal {

public:
    Dog(const string &name) : Animal(name) {}
};


#endif //DEMO_DOG_H
