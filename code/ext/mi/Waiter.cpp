//
// Created by pby on 2022/8/14.
//

#include "Waiter.h"

void Waiter::show() const {
    cout << "Waiter, name:" << getName() << endl;
}

Waiter::~Waiter() {
    cout << "~Waiter, name:" << getName() << endl;
}