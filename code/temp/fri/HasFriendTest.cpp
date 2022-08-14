//
// Created by pby on 2022/8/14.
//

#include <iostream>

using namespace std;

//---------------
// 声明约束的模板友元函数。
template<class T>
void countsV2();

template<class T>
void reportV2(T &);
//---------------

template<class T>

class HasFriend {

private:
    T item;
    static int ct;

public:
    HasFriend(const T &t) : item(t) {
        ct++;
    }

    ~HasFriend() {
        ct--;
    }

    //-----------
    // 非模板友元函数。所有实例化的模板都会拥有此函数。
    friend void counts();

    // 注意：它不是模板函数，仅是带了一个模板参数的函数。
    friend void report(const HasFriend<T> &hf);
    //-----------

    // ------------
    // 受类模板约束的模板友元函数，需要在上面声明。
    friend void countsV2<T>();

    friend void reportV2<>(HasFriend<T> &);
    //-------------
};

template<class T>
// 注意初始化它，否则会编译不过。
int HasFriend<T>::ct = 0;

void counts() {
    cout << "HasFriend<int>.count:" << HasFriend<int>::ct << endl;
    cout << "HasFriend<double>.count:" << HasFriend<double>::ct << endl;
}

void report(const HasFriend<int> &hf) {
    cout << "HasFriend<int>.item:" << hf.item << endl;
}

void report(const HasFriend<double> &hf) {
    cout << "HasFriend<int>.item:" << hf.item << endl;
}

template<class T>
void countsV2() {
    cout << "countsV2, count:" << HasFriend<T>::ct << endl;
}

template<class T>
void reportV2(T &t) {
    cout << "reportV2, value:" << t.item << endl;
}

int main_has_friend() {
    HasFriend<int> f1(1);
    HasFriend<int> f2(2);
    HasFriend<double> f3(3.0);
//    counts();
//    report(f2);
    countsV2<int>();
    countsV2<double>();
    reportV2(f1);
}

