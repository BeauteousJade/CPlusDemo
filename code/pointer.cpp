//
// Created by pby on 2022/5/3.
//


#include <iostream>
#include <vector>
#include <array>

using namespace std;


struct inflatable {
    string name;
    float volume;
    double price;
};

int main() {

    int a = 6;
    int b = 7;
    int *address_a = &a;

    *address_a = 10;

    cout << "a valued = " << a << " a address = " << &a << " b value " << b << " b address = " << &b << endl;
    cout << "*address_a = " << *address_a << endl;
    int c = *address_a;
    c = 11;
    cout << "c value " << c << ",a value = " << a << endl;

    int *p1 = new int;
    *p1 = 1;
    double *p2 = new double;
    *p2 = 2.0;
    cout << "p1 value = " << *p1 << ", p1 size = " << sizeof(p1) << ",*p1 size = " << sizeof(*p1) << ", p2 value "
         << *p2 << ", p2 size = " << sizeof(p2) << ", *p2 size = " << sizeof(*p2) << endl;
    delete p1;
    // 不能多次delete。
    delete p2;

    int *int_array = new int[3];
    int array[3];
    int_array[0] = 1;
    int_array[1] = 2;
    cout << "int_array index 0 value = " << int_array[0] << ", index 1 value = " << int_array[1] << endl;
    cout << "int_array index 0 value = " << *int_array << ", index 1 value = " << *(int_array + 1) << endl;
    // sizeof 指针，表示指针的长度；sizeof 数组，表示数组长度 = 数组元素个数 * 元素类型长度，单位都为字节。
    cout << "int_array size = " << sizeof(int_array) << " array size = " << sizeof(array) << endl;
    delete[] int_array;

    short tell[2] = {1, 2}; // 假设占用20个字节。
    short *p3 = tell; // or &tell[0]，p3 + 1 增加2个字节，指向下一个元素。
    short (*p4)[2] = &tell; // p4 + 1，增加20个字节。类型short(*)[20], *p4与 tell等价。(*p4)[0]是第一个元素。
    short *p5 = &(tell[0]);
    short *p6 = &(tell[0]);
    long diff = p6 - p5;


    // const，不允许修改数组里面的内容。
    const char *char_p = "123";
    cout << "char_p = " << char_p << ", *char_p = " << *char_p << ", char_p address = " << (int *) char_p << endl;


    // new 创建结构体指针。
    inflatable *in = new inflatable;
    (*in).name = "pby";
    in->price = 10;
    delete in;


    // a1和a3都在栈上，a2在堆上。
    int a1[2] = {1, 2};
    vector<int> a2(2);
    a2[0] = 2;
    a2[1] = 3; // or  a2.at[1] ?
    std::array<int, 2> a3 = {4, 5};

    cout << "a1[0] value" << a1[0] << ", a1[0] address = " << &a1[0] << ", a2[0] value = " << a2[0]
         << ", a2[0] address = " << &a2[0] << ", a3[0] value = " << &a3[0] << ", a3[0] address = " << &a3[0] << endl;

    // string 可以用==比较，指针和char数组要用strcmp == 0比较，等于0表示相等。
    string string1 = "123";
    string string2 = "123";
    cout << (string1 == string2) << endl;
}
