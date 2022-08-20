//
// Created by pby on 2022/8/20.
//

#include "TV.h"


void TV::setMode(int mode) {
    cout << "TV2::setMode, oldMOde:" << this->mode << ",mode:" << mode << endl;
    this->mode = mode;
}