//
// Created by pby on 2022/5/21.
//

#include <iostream>
#include <string>

using namespace std;

// 结构体的直接赋值，都是copy info.
// demo a{};
// demo b = a; // 此时a 跟b没有，两个变量内存是独立开的，内部的info是相同。
struct demo {
    int a;
};

void struct_test(const demo &instance);

void struct_testV2(demo &instance);

void struct_testV3(demo instance);

void ref_v1(int &a) {
    a = 1;
}

int &ref_v2(int &a) {
    a = 2;
    return a;
}

int ref_v3(int &a) {
    a = 3;
    return a;
}

const int &ref_v4(int &a) {
    a = 4;
    return a;
}

void ref_v5(const double &a) {

}

string string_v1(const string &s1, const string &s2) {
    return s2 + s1 + s2;
}

const string &string_v2(string &s1, const string &s2) {
    s1 = s2 + s1 + s2;
    return s1;
}

const string &string_v3(string &s1, const string &s2) {
    // 这个是危险操作，因为temp是临时变量， 外部在使用的时候，已经释放了。
    string temp;
    temp = s2 + s1 + s2;
    return temp;
}


int main() {

    int a = 10;
    // 引用类型的变量。
    // 左值引用
    int &b = a;
    b++;
    cout << "a = " << a << ",b = " << b << endl;
    a++;
    cout << "a = " << a << ",b = " << b << endl;

    // 右值引用
    int j = 10;
    int &&c = 10 * j + 10;

    demo instance{1};
    struct_testV2(instance);
    cout << "struct.a = " << instance.a << endl;


    int d = 10;
    ref_v1(d);
    cout << "ref_v1 d = " << d << endl;
    d = 10;
    // 先ref_v2修改值，再ref_v1修改值。
    ref_v1(ref_v2(d));
    cout << "ref_v1 v2 d = " << d << endl;
    d = 10;
    // 报错,v3返回的一个右值，不能传递给一个左值引用。
//    ref_v1(ref_v3(d));
//    cout << "ref_v1 v2 d = " << d << endl;

    // 实际上是给d赋值为11.
    ref_v2(d) = 11;
    cout << "ref_v2 d = " << d << endl;

    // 虽然ref_v5是double 引用，但是是const double&类型，所以合法。2点：
    // 因为const 引用类型跟实参类型不匹配，会自动将实参类型转换为正确的类型,
    // 程序将创建一个正确类型的临时变量，然后用转换类型之后的实参值来初始化这个临时变量，
    // 最会将这个临时变量传递给函数。因为函数形参是const 引用类型，它不能改变这个临时变量的值，
    // 所以是安全的。
    ref_v5(d);


    // const的引用不允许修改值。
    //ref_v4(d) = 12;

    string str = "123";
    string res;
    res = string_v1(str, "***");
    cout << "string v1 str = " << str << ", res = " << res << endl;
    res = string_v2(str, "###");
    cout << "string v2 str = " << str << ", res = " << res << endl;
    res = string_v3(str, "@@@");
    cout << "string v3 str = " << str << ", res = " << res << endl;

}

void struct_test(const demo &instance) {
    // 使用const 不允许内部的值。
//    instance.a = 10;
}

void struct_testV2(demo &instance) {
    // 这里的修改生效。
    instance.a = 11;
}

void struct_testV3(demo instance) {
    // 这里的修改不生效。
    instance.a = 11;
}

