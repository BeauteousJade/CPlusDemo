//
// Created by pby on 2022/8/13.
//

#ifndef DEMO_HASDMA_H
#define DEMO_HASDMA_H

#include "BaseDMA.h"


class HasDMA : public BaseDMA {

private:
    char *str1;

    int getLen1() const {
        return strlen(str1);
    }

public:
    HasDMA(const int len) : BaseDMA(len) {
        str1 = new char[10];
    }

    HasDMA(const HasDMA &hma);

    HasDMA &operator=(const HasDMA &hma);

    // 继承友元函数。
    friend ostream &operator<<(ostream &os, const HasDMA &dma);


    virtual ~HasDMA() {}
};


#endif //DEMO_HASDMA_H
