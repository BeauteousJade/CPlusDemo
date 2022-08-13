//
// Created by pby on 2022/8/13.
//

#include "AcctABC.h"
#include "BrassV2.h"
#include "BrassPlusV2.h"

/**
 * 抽象类测试。
 */

int main() {
    AcctABC *abc1 = new BrassPlusV2("pby", 100.0);
    AcctABC *abc2 = new BrassV2("pby", 50);

    abc1->withDraw(10);
    abc2->withDraw(10);


    delete abc1;
    delete abc2;
}

