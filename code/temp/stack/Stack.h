//
// Created by pby on 2022/8/14.
//

#ifndef DEMO_STACK_H
#define DEMO_STACK_H

#include <iostream>

using namespace std;


template<class Type> // 声明一个模板。or template<typename Type>


class Stack {

private:
    // 要初始化，默认不会初始化。
    int count = 0;
    int maxCount;
    Type *types;

public:

    Stack() : maxCount(10) {
        types = new Type[10];
    }

    Stack(const int maxCount) : maxCount(maxCount) {
        types = new Type[maxCount];
    }

    ~Stack() {
        delete[] types;
    }

    void show() const {
        if (count <= 0) {
            return;
        }
        for (int i = 0; i < count; ++i) {
            cout << types[i] << " ";
        }
        cout << endl;
    }

    bool isEmpty() const {
        return count == 0;
    }

    bool isFull() const {
        return count == maxCount;
    }

    bool push(const Type &item) {
        if (count < maxCount) {
            types[count++] = item;
            return true;
        }
        return false;
    }

    bool pop(const Type &t) {
        if (count > 0) {
            t = types[count--];
            return true;
        }
        return false;
    }
};


#endif //DEMO_STACK_H
