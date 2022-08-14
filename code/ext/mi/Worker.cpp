//
// Created by pby on 2022/8/14.
//

#include "Worker.h"

void Worker::show() const {
    cout << "worker, name:" << name << endl;
}

Worker::~Worker() {
    cout << "~worker, name:" << getName() << endl;
}