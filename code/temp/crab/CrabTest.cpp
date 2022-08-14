//
// Created by pby on 2022/8/14.
//

#include <iostream>
#include "../stack/Stack.h"

using namespace std;

// 这里表示的意思是：V类型是有一个模板类。
// 模板类型用作参数。
template<template<typename T> class V>
class Crab {

private:
    V<int> s1;
    V<double> s2;
public:

    // 注意，这里的V类型一定要有默认的构造函数，否则会报错。
    Crab() {};

    bool push(int a, double b) {
        s1.push(a);
        s2.push(b);
        return true;
    }

    bool pop(const int &a, const double &b) {
        s1.pop(a);
        s2.pop(b);
        return true;
    }

    void show() const {
        s1.show();
    }
};

/**
 * 模板 用作参数
 */

int main_crab() {
    Crab<Stack> crab;
    crab.push(1, 2);
    crab.push(2, 3);

    crab.show();
}
