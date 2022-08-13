//
// Created by pby on 2022/8/13.
//

#include <iostream>
#include <string>

#include "Brass.h"
#include "BrassPlus.h"

using namespace std;


/**
 * 继承 + 多态测试。
 */
int main_brass() {
    Brass brass = Brass();
    BrassPlus brassPlus = BrassPlus();
    Brass brass1 = BrassPlus();

    // 加上const 修饰符，只能调用const方法。
//    const Brass &brass_ref = brass;
    Brass &brass_ref = brass;
    Brass &brass_plus_ref = brassPlus;

    brass_ref.viewAcct();
    cout << endl;

    brass_plus_ref.viewAcct();
    cout << endl;
    // 调用Brass::viewAcct,只有指针和引用才符合多态特性。
    brass1.viewAcct();

    // 基类和子类有一个一个相同的虚方法，但是参数不同，子类会把父类的方法给隐藏，不能调用。
//    brassPlus.testVirtual(5);
    brassPlus.testVirtual(5);
}

