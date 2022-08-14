//
// Created by pby on 2022/8/14.
//

#ifndef DEMO_SINGER_H
#define DEMO_SINGER_H

#include "Worker.h"


/**
 * 使用virtual关键字，保证Worker是虚基类。
 * 当多继承的时候，保证Worker只会被初始化一次。
 */
class Singer : virtual public Worker {


public:
    Singer() : Worker() {}

    Singer(const string &name) : Worker(name) {}

    virtual void show() const;

    virtual ~Singer();
};


#endif //DEMO_SINGER_H
