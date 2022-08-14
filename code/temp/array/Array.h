//
// Created by pby on 2022/8/14.
//

#ifndef DEMO_ARRAY_H
#define DEMO_ARRAY_H

#include <iostream>
#include <cstdlib>

using namespace std;

// n是非类型参数，可以用来接受外部的值。
template<class T, int n>

class Array {
private:
    T types[n];

    void checkIndex(int index) const {
        if (index < 0 || index >= n) {
            cout << "error index:" << index << ",size = " << n << endl;
            // 退出程序。
            exit(EXIT_FAILURE);
        }
    }

public:
    Array() {};

    explicit Array(const T &v);

    void show() const {
        for (int i = 0; i < n; ++i) {
            cout << "index:" << i << ", value:" << types[i] << endl;
        }
        cout << endl;
    }

    // 修改值。
    // 这个方法比下面的方法优先级高。
    virtual T &operator[](int index);

    // 获取值。
    virtual T operator[](int index) const;
};

template<class T, int n>
Array<T, n>::Array(const T &v) {
    for (int i = 0; i < n; ++i) {
        types[i] = v;
    }
}

template<class T, int n>
T &Array<T, n>::operator[](int index) {
    cout << "set" << endl;
    checkIndex(index);
    return types[index];
}

template<class T, int n>
T Array<T, n>::operator[](int index) const {
    cout << "get" << endl;
    checkIndex(index);
    return types[index];
}

#endif //DEMO_ARRAY_H
