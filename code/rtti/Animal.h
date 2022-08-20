//
// Created by pby on 2022/8/20.
//

#ifndef DEMO_ANIMAL_H
#define DEMO_ANIMAL_H

#include "string"
#include "iostream"

using namespace std;


class Animal {
private:
    string name;
public:
    Animal(const string &name) {
        this->name = name;
    }

    virtual void log() {
        cout << "name:" << name << endl;
    }
};


#endif //DEMO_ANIMAL_H
