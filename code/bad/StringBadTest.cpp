//
// Created by pby on 2022/8/6.
//

#include "StringBad.h"
#include <iostream>

using namespace std;

int main_String_bad() {
    {
        StringBad *s1 = new StringBad();
        StringBad *s2 = new StringBad();

        StringBad s3 = StringBad();
        // 调用了复制构造函数。实际上是：StringBad s4 = StringBad(s3)
        // 如果不定义的话，由编译器默认生成。其内部复制都是浅复制。
        // 内部如果有指针的话，需要深复制，否则会出现乱码和多次释放。
        StringBad s4 = s3;

        StringBad s5;
        // 这里会调用=运算符，所以需要重载=运算符。
        s5 = s4;

        // 调用静态函数。
        cout << "num = " << StringBad::count() << endl;

        s5[5] = 'a';
        cout << "char = " << s5[5] << endl;


        delete s1;
        delete s2;
    }
    // 没有复制构造函数为-1，有则为0
    cout << "num = " << StringBad::count() << endl;
}