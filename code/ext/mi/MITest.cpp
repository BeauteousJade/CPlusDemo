//
// Created by pby on 2022/8/14.
//

#include "Worker.h"
#include "Waiter.h"
#include "Singer.h"
#include "SingingWaiter.h"

/**
 * 多重继承
 *
 * Worker <- Singer
 * Worker <- Waiter
 *
 *
 */

int main() {
    Singer p("pby1");
    Waiter p1("pby2");
    SingingWaiter p2("pby3");

    // 一维数组，用来存储地址。
    Worker *array[3] = {&p, &p1, &p2};
    for (int i = 0; i < 3; ++i) {
        array[i]->show();
    }
}