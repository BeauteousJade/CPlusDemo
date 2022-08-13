//
// Created by pby on 2022/8/13.
//

#include "BaseDMA.h"


BaseDMA::BaseDMA(const BaseDMA &dma) {
    str = new char[getLen() + 1];
    strcpy(str, dma.str);
}

BaseDMA &BaseDMA::operator=(const BaseDMA &dma) {
    if (this == &dma) {
        return *this;
    }
    delete[] str;
    str = new char[dma.getLen() + 1];
    strcpy(str, dma.str);
    return *this;
}

ostream &operator<<(ostream &os, const BaseDMA &dma) {
    os << "len:" << dma.getLen() << endl;
    return os;
}