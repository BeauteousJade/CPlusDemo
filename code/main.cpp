#include <iostream>
#include <climits>

using namespace std;

void print();

int main4() {
    cout.setf(ios_base::fixed, ios_base::floatfield);

    short a = {SHRT_MAX};
    unsigned short a1 = a + 1;
    int b = INT_MAX;
    long c = LLONG_MAX;
    long long d = LONG_LONG_MAX;
    int pow = 1000000.0;
    float e = 10 * pow / 3.0;
    double f = 10 * pow / 3.0;
    long double g = 10 * pow / 3.0;
    cout << "short size = " << sizeof(a) << " value = " << a << endl;
    cout << "a1 value = " << a1 << endl;
    cout << "int size = " << sizeof(b) << " value = " << b << endl;
    cout << "long size = " << sizeof(c) << " value = " << c << endl;
    cout << "long long size = " << sizeof(d) << " value = " << d << endl;
    cout << "float size = " << sizeof(e) << " value = " << e << endl;
    cout << "double size = " << sizeof(f) << " value = " << f << endl;
    cout << "long double size = " << sizeof(g) << " value = " << g << endl;

    cout << "value1 = " << 042 << " value2 = " << 0x42 << endl;


}

void print() {
    cout << "我是print";
}
