//
// Created by pby on 2022/7/2.
//

#include <iostream>
#include "Time.h"

using namespace std;

Time::Time(long hours, long minutes) {
    this->hours = hours;
    this->minutes = minutes;
}

void Time::test() {
    cout << "test" << endl;
}

Time Time::operator+(const Time &t) const {
    Time sum(this->hours, this->minutes);
    sum.hours = sum.hours + t.hours + (sum.minutes + t.minutes) / 60;
    sum.minutes = (sum.minutes + t.minutes) % 60;
    return sum;
}

Time Time::operator-(const Time &t) const {
    return {this->hours - t.hours, this->minutes - t.minutes};
}

Time Time::operator-() const {
    return {-this->hours, -this->minutes};
}

Time operator*(double m, const Time &t) {
    Time res(0, 0);
    long totalMinutes = (long) (t.hours * m * 60 + t.minutes * m);
    res.hours = totalMinutes / 60;
    res.minutes = totalMinutes % 60;
    return res;
}

ostream &operator<<(ostream &os, const Time &t) {
    os << "hours = " << t.hours << " minutes = " << t.minutes << endl;
    return os;
}

Time Time::add(const Time &t) const {
    Time sum(this->hours, this->minutes);
    sum = sum + t;
    return sum;
}

void Time::show() const {
    cout << "hours = " << hours << " minutes = " << minutes << endl;
}
