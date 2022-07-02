//
// Created by pby on 2022/7/2.
//

#include "Stonewt.h"
#include <iostream>

using namespace std;

Stonewt::Stonewt() {
    stone = 0;
    pounds = 0;
}

Stonewt::Stonewt(double stone) {
    this->stone = stone;
    this->pounds = stone * lbs_per_stn;
}

Stonewt::~Stonewt() {

}

void Stonewt::show() const {
    cout << "stone = " << stone << " pounds = " << pounds << endl;
}

Stonewt::operator int() const {
    return (int) stone;
}

Stonewt::operator double() const {
    return stone;
}

Stonewt Stonewt::operator+(const Stonewt &s) const {
    Stonewt sum;
    sum.stone = stone + s.stone;
    sum.pounds = pounds + s.stone * lbs_per_stn;
    return sum;
}

