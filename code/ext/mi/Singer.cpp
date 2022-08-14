//
// Created by pby on 2022/8/14.
//

#include "Singer.h"

void Singer::show() const {
    cout << "singer，name:" << getName() << endl;
}

Singer::~Singer() {
    cout << "~Singer, name:" << getName() << endl;
}