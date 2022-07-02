//
// Created by pby on 2022/6/26.
//

#include <iostream>
#include "Stock.h"

Stock::Stock() {
    mName = "init1";
    mTotal = 100;
}

Stock::Stock(const string &name, int total) {
    mName = name;
    mTotal = total;
}

Stock::~Stock() {
    cout << "我是Stock的析构函数 name = " << mName << endl;
}

void Stock::show() const {
    cout << "mName = " << mName << ", mTotal = " << mTotal << endl;
}

void Stock::update(int updateValue) {
    mTotal += updateValue;
}


