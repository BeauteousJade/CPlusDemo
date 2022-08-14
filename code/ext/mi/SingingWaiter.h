//
// Created by pby on 2022/8/14.
//

#ifndef DEMO_SINGINGWAITER_H
#define DEMO_SINGINGWAITER_H

#include "Singer.h"
#include "Waiter.h"


// 多继承，由于Singer和Waiter有一个共同的基类，所以需要将共同的基类改为虚基类。
class SingingWaiter : public Singer, public Waiter {

public:
    // 当有虚基类的时候，不能只调用父类的构造方法，还必须要手动虚基类的构造函数。
    // 如果不调用，则调用默认的构造函数。
    SingingWaiter(const string &name = "none") : Worker(name), Waiter(name), Singer(name) {}

    virtual ~SingingWaiter();

    // 由于两个基类里面都有一个show方法，所以这里必须重新定义方法。
    virtual void show() const;
};


#endif //DEMO_SINGINGWAITER_H
