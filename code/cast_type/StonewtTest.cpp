//
// Created by pby on 2022/7/2.
//

#include "Stonewt.h"

int main_stonewt_test() {
    Stonewt stonewt = 19.0; // 隐式转换，自动类型转换，类似于Stonewt(19.0)

    // 如果构造方法使用了explicit，只能显示转换。
    Stonewt stonewt1 = (Stonewt) 20.0; // 显示转换，强转

    double d = stonewt; // 使用转换函数自动转换。
    int i = stonewt;
    long l;
//    l = stonewt; // 直接转换存在二义性，所以编译报错，可使用如下两种方式。
    l = (double) stonewt;
    l = int(stonewt);

    // 由于同时定义转换函数，和重载了+运算符，所以存在二义性，编译失败。
    // Stonewt stonewt2 = stonewt1 + 10.0;
}

