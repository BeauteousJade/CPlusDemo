//
// Created by pby on 2022/8/14.
//

#ifndef DEMO_WAITER_H
#define DEMO_WAITER_H

#include "Worker.h"


class Waiter : virtual public Worker {


public:
    Waiter() : Worker() {}

    Waiter(const string &name) : Worker(name) {}

    virtual void show() const;

    virtual ~Waiter();

};


#endif //DEMO_WAITER_H
