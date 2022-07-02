//
// Created by pby on 2022/7/2.
//

#ifndef DEMO_TIME_H
#define DEMO_TIME_H


#include <iostream>

using namespace std;

class Time {
private:
    long hours;
    long minutes;

    void test();

public:
    Time(long hours, long minutes);

    Time add(const Time &t) const;

    Time operator+(const Time &t) const;

    // 二元运算符:A - B。
    Time operator-(const Time &t) const;

    // 一元运算符：-A
    Time operator-() const;

    // 友元函数，不是成员函数。可以访问成员变量，不能访问成员函数。
    friend Time operator*(double m, const Time &t);

    friend ostream &operator<<(ostream &os, const Time &t);

    void show() const;
};

#endif //DEMO_TIME_H
