//
// Created by pby on 2022/8/13.
//

#ifndef DEMO_BASEDMA_H
#define DEMO_BASEDMA_H

#include <string>
#include <iostream>

using namespace std;


class BaseDMA {

private:
    char *str;

    int getLen() const {
        return strlen(str);
    }

public:
    BaseDMA(const int len) {
        str = new char[len];
    }

    // 复制构造函数。
    BaseDMA(const BaseDMA &dma);

    // = 运算符。
    BaseDMA &operator=(const BaseDMA &dma);

    // 友元函数。
    friend ostream &operator<<(ostream &os, const BaseDMA &dma);

    virtual ~BaseDMA() {
        delete[] str;
    }


};


#endif //DEMO_BASEDMA_H
