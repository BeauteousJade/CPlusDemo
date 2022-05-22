//
// Created by pby on 2022/5/22.
// 模板函数相关的。
//
#include <iostream>

using namespace std;


struct demo {
    int a;
};
struct demo1 {
    int a;
};

// --------C++的函数模板，也是Java中的泛型方法--------。
template<typename T>
void swap(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

template<typename T, typename K>
void template_test(T &a, K &b) {

}
// --------C++的函数模板，也是Java中的泛型方法--------。

// ------模板显示具体化---------
template<typename T>
void swapDemo(T &, T &) {}

template<>
void swapDemo<demo>(demo &a, demo &b) {
    int temp = a.a;
    a.a = b.a;
    b.a = temp;
}
// ------模板显示具体化---------

// ------------显示实例化，针对于方法调用处---------
template<typename T>
void swap_test(T, T) {

}
// ------------显示实例化，针对于方法调用处---------

// decltype，返回类型是a + b 类型
template<typename T1, typename T2>
auto add(T1 a, T2 b) -> decltype(a + b) {
    decltype(a + b) c = a + b;
    return c;
}

int main() {
    demo d1{1};
    demo d2{2};

    demo1 d3{3};
    demo1 d4{4};

    cout << "before d1.a = " << d1.a << ", d2.a = " << d2.a << endl;
    // 使用的是具体化方法
    swapDemo(d1, d2);
    cout << "after d1.a = " << d1.a << ", d2.a = " << d2.a << endl;

    cout << "before d3.a = " << d3.a << ", d3.a = " << d4.a << endl;
    swapDemo(d3, d4);
    cout << "after d3.a = " << d3.a << ", d3.a = " << d4.a << endl;

    int int_val = 1;
    double double_val = 2.0;
    // 显示实例化，类型自动转换。
    swap_test<double>(int_val, double_val);

    double xx = 4.4;
    // r1 是double & 类型
    decltype((xx)) r1 = xx;
    // r2 是double 类型
    decltype(xx) r2 = xx;

    int a = 10;
    int &k = a;
    int &n = a;
    //注意，k和n是引用类型，但是k+n的和是int类型
    decltype(k + n) r3;

    // 给decltype(k + n)换别名。
    typedef decltype(k + n) kntype;
    kntype c;
}
