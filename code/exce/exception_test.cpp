//
// Created by pby on 2022/8/20.
//

#include "iostream"
#include "stdexcept"
#include "exception"

using namespace std;


void myQuit() {
    cout << "myQuit" << endl;
}

double test(double a, double b) {
    try {
        if (b == 0) {
            throw runtime_error("test");
        }
        return a / b;
    } catch (runtime_error &exception) {
        cout << exception.what() << endl;
    }
    // 没有匹配的异常类型，会默认调用unexpected函数。这个函数默认调用terminate函数。
    // 可以通过set_unexpected函数改变其行为，限制如下：
    // 1. 调用terminate、abort或者exit。
    // 2. 手动触发新的异常。
    //    A. 如果新的异常能被catch匹配，就能捕获.
    //    B. 如果不能匹配，但是新异常则变成了bad_exception.
}

double test2() {
    double *a = new double;
    bool b = true;
    if (b) {
        throw runtime_error("test2");
    }
    // 内存泄露。
    delete a;
}

int main_exception_test() {
    // 程序退出前执行的函数
    set_terminate(myQuit);
    test(1, 0);
    test2();
}
