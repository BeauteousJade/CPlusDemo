//
// Created by pby on 2022/5/14.
//

#include <iostream>

using namespace std;

int sum(const int array[], int n);

int sumV2(const int *begin, const int *end);

// 二维数组的申明
int sumV3(const int  (*array)[4], int size);

int sumV4(const int array[][4], int size);

//const 指针能够承载
void override_test_v1(double *a) {
    cout << "override_test_v1" << endl;
}

void override_test_v1(const double *a) {
    cout << "override_test_v1 const" << endl;

}

// const引用能重载
void override_test_v2(double &a) {}

void override_test_v2(const double &a) {}

const int size = 3;

int main_method() {
    const int tempArray[3] = {1, 2, 3};
    cout << "sizeof tempArray " << sizeof(tempArray) << endl;
    int sumNumber = sum(tempArray, size);
    cout << "sumNumber = " << sumNumber << endl;



    // 申明一个函数指针，可以指向一个正常的函数。
    int (*pf)(const int array[], int n) = sum;
    // 函数指针调用,两种方式都是等效的。
    pf(tempArray, size);
    (*pf)(tempArray, size);

    const int tempArray2[2][4] = {{1, 2, 3, 4},
                                  {1, 2, 3, 4}};
    // 函数指针数组。
    int (*pArray[2])(const int [][4], int) = {sumV3, sumV4};
    // 指针数组的调用。
    pArray[0](tempArray2, 2);
    (*pArray[0])(tempArray2, 2);

    const double a[3] = {1, 2, 3};
    double b[3] = {1, 2, 3};
    // const优先和const匹配，非const优先和非const匹配。
    // 非const找不到非const,再和const匹配。
    override_test_v1(a);
    override_test_v1(b);
}

int sum(const int array[], int n) {
    cout << "sizeof array " << sizeof(array) << endl;
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += array[i];
    }
    return sum;
}

int sumV2(const int *begin, const int *end) {
    int sum = 0;
    for (const int *p = begin; p != end; p++) {
        sum += *p;
    }
    return sum;
}

int sumV3(const int  (*array)[4], int size) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < 4; ++j) {
            sum += array[i][j];
        }
    }
    return sum;
}

int sumV4(const int array[][4], int size) {
    return sumV3(array, size);
}