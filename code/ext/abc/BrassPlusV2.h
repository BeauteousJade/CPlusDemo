//
// Created by pby on 2022/8/13.
//

#ifndef DEMO_BRASSPLUSV2_H
#define DEMO_BRASSPLUSV2_H

#include "AcctABC.h"

class BrassPlusV2 : public AcctABC {

public:

    BrassPlusV2(const string &name, const double bal = 0.0) : AcctABC(name, bal) {}

    virtual void withDraw(double amt);


    virtual ~BrassPlusV2() {
        // 不能手动调用父类的析构函数，否则会打破原有规则，析构函数可能会少调用。
        cout << "~BrassPlusV2" << endl;
    }
};


#endif //DEMO_BRASSPLUSV2_H
