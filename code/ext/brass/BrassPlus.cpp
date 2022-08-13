//
// Created by pby on 2022/8/13.
//

#include <iostream>
#include "BrassPlus.h"


BrassPlus::BrassPlus(const string &name, long an, double bal, double maxLoan, double rate) : Brass(name, an, bal) {
    this->maxLoan = maxLoan;
    this->owesBank = 0.0;
    this->rate = rate;
}

BrassPlus::BrassPlus(const Brass &ba, double maxLoan, double rate) : Brass(ba) {
    this->maxLoan = maxLoan;
    this->rate = rate;
}

void BrassPlus::viewAcct() const {
    // 先调用父类的方法。
    Brass::viewAcct();
    cout << "maxLoan:" << maxLoan << ", owesBank:" << owesBank << ", loan rate:" << rate << endl;
}

void BrassPlus::withDraw(double amt) {
    const double bal = getBalance();
    if (amt <= bal) {
        Brass::withDraw(amt);
    } else if (amt <= bal + maxLoan - owesBank) {
        double advance = amt - bal;
        owesBank += advance * (1 + rate);
        deposit(amt);
        Brass::withDraw(amt);
    }
}

void BrassPlus::testVirtual(int a) const {

}

BrassPlus &BrassPlus::build() {
    return *this;
}