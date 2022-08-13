//
// Created by pby on 2022/8/13.
//

#include <iostream>
#include <string>

#include "Brass.h"
#include "BrassPlus.h"

using namespace std;


int main() {
    Brass brass = Brass();
    BrassPlus brassPlus = BrassPlus();

    // 加上const 修饰符，只能调用const方法。
//    const Brass &brass_ref = brass;
    Brass &brass_ref = brass;
    Brass &brass_plus_ref = brassPlus;

    brass_ref.viewAcct();
    cout << endl;

    brass_plus_ref.viewAcct();
}

