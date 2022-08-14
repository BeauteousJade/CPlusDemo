//
// Created by pby on 2022/8/14.
//

#include "SingingWaiter.h"


void SingingWaiter::show() const {
    // 可以明确使用某个父类的方法。
//    Singer::show();
    cout << "SingingWaiter, name:" << getName() << endl;
}

SingingWaiter::~SingingWaiter() {
    cout << "~SingingWaiter,name:" << getName() << endl;
}