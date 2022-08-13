//
// Created by pby on 2022/8/13.
//

#include "HasDMA.h"

/**
 *
 * 如果子类需要重写复制构造函数和=运算符，需要调用的相关方法。
 */

// 调用父类的复制构造函数。
HasDMA::HasDMA(const HasDMA &hma) : BaseDMA(hma) {
    str1 = new char[getLen1() + 1];
    strcpy(str1, hma.str1);
}

HasDMA &HasDMA::operator=(const HasDMA &hma) {
    if (this == &hma) {
        return *this;
    }
    // 调用父类的复制运算符。
    BaseDMA::operator=(hma);
    delete[] str1;
    str1 = new char[hma.getLen1() + 1];
    strcpy(str1, hma.str1);
    return *this;
}

ostream &operator<<(ostream &os, const HasDMA &dma) {
    // 调用父类的<<。
    os << (const BaseDMA &) dma;
    os << "len1:" << dma.getLen1() << endl;
    return os;
}