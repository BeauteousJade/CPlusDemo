//
// Created by pby on 2022/8/13.
//

#ifndef DEMO_BRASSV2_H
#define DEMO_BRASSV2_H

#include "AcctABC.h"


class BrassV2 : public AcctABC {

public:
    BrassV2(const string &name = "none", const double bal = 0.0) : AcctABC(name, bal) {};

    virtual void withDraw(double amt);

    virtual ~BrassV2() {
        cout << "~BrassV2" << endl;
    }

};


#endif //DEMO_BRASSV2_H
