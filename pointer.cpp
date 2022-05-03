//
// Created by pby on 2022/5/3.
//


#include <iostream>
#include <string>

using namespace std;

int main() {
    int a = 6;
    double b = 7;
    int *address_a = &a;

    *address_a = 10;

    cout << "a valued = " << a << " a address = " << &a << " b value " << b << " b address = " << &b << endl;
    cout << "*address_a = " << *address_a << endl;

    int *p1 = new int;
    *p1 = 1;
    double *p2 = new double;
    *p2 = 2.0;
    cout << "p1 value = " << *p1 << ", p1 size = " << sizeof(p1) << ",*p1 size = " << sizeof(*p1) << ", p2 value "
         << *p2 << ", p2 size = " << sizeof(p2) << ", *p2 size = " << sizeof(*p2) << endl;
}
