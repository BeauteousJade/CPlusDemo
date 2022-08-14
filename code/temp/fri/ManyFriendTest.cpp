//
// Created by pby on 2022/8/14.
//

#include "iostream"

using namespace std;

template<class T>
class ManyFriend {
private:
    const T item;
public:
    ManyFriend(const T &t) : item(t) {}

    // 非约束的模板友元函数。
    template<class C, class D>
    friend void show(C &, D &);
};

template<class C, class D>
void show(C &c, D &d) {
    cout << "c.item:" << c.item << ", d.item:" << d.item << endl;
}


// 为模板类取别名。
typedef array<int, 10> arrInt;

int main() {
    ManyFriend<int> f1(1);
    ManyFriend<double> f2(2.0);
    show(f1, f2);
}