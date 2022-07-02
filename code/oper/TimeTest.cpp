//
// Created by pby on 2022/7/2.
//

#include "Time.h"
#include <iostream>

using namespace std;

int main_time_test() {
    Time time1(1, 10);
    Time time2(3, 55);
    Time time3 = time1 + time2;
    time3.show();
    Time time4 = 2 * time1;
    time4.show();

    // 使用友元函数重载<<操作符。
    cout << time1 << endl;
    cerr << time1 << endl;

}