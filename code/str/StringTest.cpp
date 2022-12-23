//
// Created by pby on 2022/12/23.
//

#include <cstring>
#include "iostream"

using namespace std;

/**
 * String 模板类Demo。
 */
int string_test_main() {
    string one("pby");
    cout << one << endl;

    string two(20, '$');
    cout << two << endl; // 20个$

    string three(two); // 拷贝构造函数
    cout << three << endl;

    string four = one + two;
    cout << four << endl; // + 运算符重载

    char chs[] = "abcdefghijklmnopqrstuvwxyz";
    string five(chs, 20);
    cout << five << endl;

    string six(chs + 6, chs + 10); // 第6个字符到第9个字符，不包括第10个字符。
    cout << six << endl;

    string seven(&chs[6], &chs[10]); // 第6个字符到第9个字符，不包括第10个字符。
    cout << seven << endl;

    string eight(four, 0, 4); // 裁剪字符串。
    cout << eight << endl;

    string ten{'p', 'b', 'y'}; // 列表方式初始化String。
    cout << ten << endl;

    string str1 = "庞柄宇";
    string str2 = "庞柄宇";
    string str3 = "pby";
    cout << "a:" << (str1 == str2) << " b:" << (str1 == str3) << endl; // 比较字符串。
    cout << "index:" << str1.find("柄") << " index1:" << str1.find("兵") << " npos:" << string::npos << endl; // 查找字符串。


    string empty;
    string small = "bit";
    string larger = "庞柄宇bit";
    // 返回当前字符串长度
    cout << "size empty:" << empty.size() << " small:" << small.size() << " larger:" << larger.size() << endl;
    // 返回当前当前字符串所申请的内存大小。
    cout << "capacity empty:" << empty.capacity() << " small:" << small.capacity() << " larger:" << larger.capacity()
         << endl;
    // 额外申请内存大小。可能不是单纯+法，具体规则还不太清楚。
    empty.reserve(50);
    cout << "capacity reserve:" << empty.capacity();

    // 将string对象转为char *格式。
    const char *cs = larger.c_str();
}

