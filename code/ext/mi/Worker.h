//
// Created by pby on 2022/8/14.
//

#ifndef DEMO_WORKER_H
#define DEMO_WORKER_H

#include <string>
#include <iostream>

using namespace std;


class Worker {

private:
    string name;

public:
    Worker() : name("none") {}

    Worker(const string &name) : name(name) {}

    const string &getName() const {
        return name;
    }

    // 子类没有指针类型，所以不需要实现。
    virtual ~Worker() = 0; // 纯虚析构函数。


    virtual void show() const;

};


#endif //DEMO_WORKER_H
