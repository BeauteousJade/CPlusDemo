//
// Created by pby on 2022/8/13.
//

#ifndef DEMO_BRASSPLUS_H
#define DEMO_BRASSPLUS_H

#include "Brass.h"


using namespace std;

class BrassPlus : public Brass {

private:
    double maxLoan;
    double rate;
    double owesBank;

public:
    BrassPlus(const string &name = "none", long an = -1, double bal = 0.0, double maxLoan = 500, double rate = 0.11);

    BrassPlus(const Brass &ba, double maxLoan = 500, double rate = 0.11);

    virtual void viewAcct() const;

    virtual void withDraw(double amt);

    // 重新定义继承的方法不是重载--改写了参数列表。
    // 如果需要重载，需要申明所有的版本。即要将testVirtual无参数版本在子类里面重写定义。
    virtual void testVirtual(int a) const;

    // 虚方法的返回类型协变，即返回类型随子类类型的变化而变化。
    virtual BrassPlus &build();

    void setRate(double r) { this->rate = r; }

    void resetOwes() { owesBank = 0; }

};


#endif //DEMO_BRASSPLUS_H
