//
// Created by pby on 2022/8/13.
//

#ifndef DEMO_BRASS_H
#define DEMO_BRASS_H

#include <string>

using namespace std;


class Brass {

private:
    string name;
    long accNum;
    double balance;

public:
    Brass(const string &name = "none", long an = -1, double bal = 0.0);

    void deposit(double amt);


    // 虚函数，保证子类在重写之后，外部引用或者指针调用，调用的是真实对象类型的方法。即多态。
    // 不是虚函数，则调用的是引用或者指针对应类型的方法。
    // 如果要在定义可以被重写的方法，一般都定义为虚的。
    virtual void withDraw(double amt);

    double getBalance() const;

    virtual void viewAcct() const;

    virtual ~Brass();
};


#endif //DEMO_BRASS_H
