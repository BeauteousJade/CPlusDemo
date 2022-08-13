//
// Created by pby on 2022/8/13.
//

#include "BrassV2.h"


void BrassV2::withDraw(double amt) {
    if (amt <= getBalance()) {
        cout << "BrassV2::withDraw" << endl;
        AcctABC::withDraw(amt);
    }
}