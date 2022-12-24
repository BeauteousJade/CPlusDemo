//
// Created by pby on 2022/12/24.
//

#include <list>
#include <iostream>

using namespace std;

bool tooBig(const int &a) {
    return a > 3;
}

template<class T>
class TooBig {
private:
    T value;
public:
    TooBig(const T &t) : value(t) {}

    bool operator()(const T &t) { return t > value; }
};

int main() {
    list<int> l;

    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back(3);
    // 函数符，删除符合条件的元素。
    l.remove_if(tooBig);
    // 类对象也可以。
    l.remove_if(TooBig<int>(2));
}

