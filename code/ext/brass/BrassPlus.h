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

    void setRate(double r) { this->rate = r; }

    void resetOwes() { owesBank = 0; }

};


#endif //DEMO_BRASSPLUS_H
