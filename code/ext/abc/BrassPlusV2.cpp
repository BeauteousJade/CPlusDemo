//
// Created by pby on 2022/8/13.
//

#include "BrassPlusV2.h"


void BrassPlusV2::withDraw(double amt) {
    if (amt <= getBalance()) {
        cout << "BrassPlusV2::withDraw" << endl;
        AcctABC::withDraw(amt);
    }
}