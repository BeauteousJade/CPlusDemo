//
// Created by pby on 2022/8/6.
//

#include <cstring>
#include <iostream>
#include "StringBad.h"

using namespace std;


// 初始化
int StringBad::num = 0;

int StringBad::count() {
    return num;
}

StringBad::StringBad() {
    // 可以使用0或者nullptr初始化指针。
    str = nullptr;
    num++;
}

StringBad::StringBad(const StringBad &s) {
    str = new char[10];
    num++;
}

StringBad &StringBad::operator=(const StringBad &st) {
    // 如果引用地址相同，直接返回this.
    if (this == &st) {
        return *this;
    }
    // 释放旧的指针。
    delete[] this->str;
    str = new char[strlen(st.str) + 1];
    strcpy(str, st.str);
    cout << "operator=" << endl;
    return *this;
}

char &StringBad::operator[](int index) {
    int len = strlen(str);
    if (index < 0 || index >= len) {
        return str[0];
    }
    return str[index];
}

const StringBad &StringBad::max(const StringBad &s2) {
    if (strcmp(this->str, s2.str) < 0) {
        return s2;
    }
    return *this;
}

StringBad::~StringBad() {
    delete[] str;
    num--;
}
